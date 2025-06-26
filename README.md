

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


