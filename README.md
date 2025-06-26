

### 🌟 What is STL?

**STL** is a **collection of template classes and functions** in C++ to help manage **data structures** and **algorithms** efficiently.

It is like a toolbox in C++ that provides **ready-to-use** components like arrays, stacks, queues, maps, and powerful algorithms like sort, search, etc.

---

### 🔧 Main Components of STL

STL has 3 main components:

| Component      | Description                                   |
| -------------- | --------------------------------------------- |
| **Containers** | Store data (e.g., `vector`, `list`, `map`)    |
| **Algorithms** | Perform operations (e.g., `sort()`, `find()`) |
| **Iterators**  | Navigate through containers like pointers     |

---

### 🧺 1. Containers (store data)

* **Sequence Containers**:

  * `vector` – dynamic array
  * `deque` – double-ended queue
  * `list` – doubly linked list

* **Associative Containers**:

  * `set`, `multiset` – store unique (or duplicate) sorted elements
  * `map`, `multimap` – key-value pairs (like a dictionary)

* **Unordered Containers** (C++11):

  * `unordered_set`, `unordered_map` – faster access using hash tables

---

### ⚙️ 2. Algorithms (operate on data)

STL includes many useful algorithms:

* `sort()`
* `reverse()`
* `count()`
* `find()`
* `binary_search()`
* `max_element()` / `min_element()`

> These can be used with arrays, vectors, etc., using **iterators**.

---

### 🧭 3. Iterators (work like pointers)

They help to access and move through elements in containers.

* `begin()` – points to the first element
* `end()` – points to one past the last element
* You can use `*it` to get value and `it++` to move

---

### ✅ Example Code

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());  // Sort the vector

    for (int x : v)
        cout << x << " ";  // Output: 1 2 3 4 5
    return 0;
}
```


### 📝 Why Use STL?

* **Fast development**
* **Efficient and tested**
* **Reusable and type-safe**
* **Flexible with templates**

Great! Here's a **comparison table** of commonly used STL containers and **example codes** for each to help you understand better.

---

## 📊 STL Containers Comparison Table

| Container       | Type        | Key Features                            | Duplicates | Order | Access Time           |
| --------------- | ----------- | --------------------------------------- | ---------- | ----- | --------------------- |
| `vector`        | Sequence    | Dynamic array, fast index access        | Yes        | Yes   | Fast (O(1) for index) |
| `list`          | Sequence    | Doubly linked list                      | Yes        | Yes   | Slow random access    |
| `deque`         | Sequence    | Double-ended queue                      | Yes        | Yes   | Fast at both ends     |
| `stack`         | Adapter     | Last-In-First-Out (LIFO)                | Yes        | Yes   | Top access only       |
| `queue`         | Adapter     | First-In-First-Out (FIFO)               | Yes        | Yes   | Front/rear access     |
| `set`           | Associative | Unique sorted elements                  | ❌ No dupes | Yes   | O(log n)              |
| `multiset`      | Associative | Sorted elements, allows duplicates      | ✅ Yes      | Yes   | O(log n)              |
| `map`           | Associative | Key-value pairs, unique keys            | ❌ No dupes | Yes   | O(log n)              |
| `multimap`      | Associative | Key-value pairs, duplicate keys allowed | ✅ Yes      | Yes   | O(log n)              |
| `unordered_map` | Hash-based  | Fast key-value with no ordering         | ❌ No dupes | No    | Avg O(1), worst O(n)  |

---

## 🔍 Code Examples

### 🔹 1. `vector`

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4};
    v.push_back(2); // Add element

    for (int x : v)
        cout << x << " ";
}
```

---

### 🔹 2. `set`

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {5, 2, 2, 1}; // No duplicates

    for (int x : s)
        cout << x << " "; // Output: 1 2 5
}
```

---

### 🔹 3. `map`

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> age;
    age["Alice"] = 20;
    age["Bob"] = 25;

    for (auto p : age)
        cout << p.first << " = " << p.second << endl;
}
```

---

### 🔹 4. `stack`

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);

    cout << "Top: " << s.top(); // Output: 20
}
```

---

### 🔹 5. `queue`

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(5);
    q.push(10);

    cout << "Front: " << q.front(); // Output: 5
}

Great! Here are some **simple STL practice problems** with explanations and solutions using different STL containers. These are perfect for C++ beginners and help build confidence using STL in real-world problems.

---

## 🧪 STL Practice Problems with Solutions

---

### 🔹 Problem 1: **Sort an Array**

**Task:**
Given an array of integers, sort it in increasing order using STL.

**Solution (using `vector` + `sort`)**:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 1, 3, 2};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";  // Output: 1 2 3 4
}
```

---

### 🔹 Problem 2: **Count Frequency of Elements**

**Task:**
Count how many times each element appears in the array.

**Solution (using `map`)**:

```cpp
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 2, 1, 3, 2};
    map<int, int> freq;

    for (int x : arr)
        freq[x]++;

    for (auto p : freq)
        cout << p.first << " occurs " << p.second << " times" << endl;
}
```

---

### 🔹 Problem 3: **Check for Duplicates**

**Task:**
Check if the array contains any duplicates.

**Solution (using `set`)**:

```cpp
#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 2};
    set<int> s;

    for (int i = 0; i < 5; i++)
        s.insert(arr[i]);

    if (s.size() < 5)
        cout << "Contains duplicates";
    else
        cout << "All elements are unique";
}
```

---

### 🔹 Problem 4: **Stack Operation**

**Task:**
Push 3 numbers into a stack and print them in reverse order (LIFO).

**Solution (using `stack`)**:

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    // Output: 30 20 10
}
```

---

### 🔹 Problem 5: **Find Max Element**

**Task:**
Find the maximum element in a list of numbers.

**Solution (using `max_element`)**:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 7, 2, 9, 1};

    int max_val = *max_element(v.begin(), v.end());

    cout << "Max: " << max_val;  // Output: 9
}
```

---

### ➕ Bonus Problem: Use `priority_queue` to sort in descending order

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(4);
    pq.push(1);
    pq.push(3);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    // Output: 4 3 1
}




