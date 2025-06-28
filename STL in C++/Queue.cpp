//Declaration Of Deque
#include<stdc++.h>
using namespace std;
queue<int>q;
//push_back()
q.push_back(1);
q.push_back(2);
q.push_back(3);
//empty()
if(q.empty())cout<<"Empty"<<endl;
else cout<<"Not Empty"<<endl;\
//size()
int sz = q.size();
cout<<sz<<endl;
//  Front()
cout<<q.front()<<endl;
//back()
cout<<q.back()<<endl;
//pop()
wehile(!q.empty())
{
     cout<<q.front()<<"";
     q.pop();
}
//emplace()
q.emplace(1);
//swap()
queue<int>q,q1;
q.push(1);
q.push(2);
q1.push(3);
q1.push(4);
q.swap(q1);
while(q.size()>0)
{
    cout<<q.front()<<"";
    q.pop();
}
