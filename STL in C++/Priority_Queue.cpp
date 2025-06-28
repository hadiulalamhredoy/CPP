
//Priority_Queue Declaration 
#include<bits/stdc++.h>
 using namespace std;
int main()
{
    Priority_Queue<int> pq;
}
//push_back()
pq.push_back(1);
pq.push_back(2);
pq.push_back(3);
//push_front()
pq.push_front(4);
pq.push_front(5);
//print Priority_Queue vaule 
for(int i =0;i<dq.size();i++)
{
   cout<<dq[i]<<"";
}
//front()
cout<<pq.front() <<endl;
//back()
cout<<pq.back()<<endl;
//pop_back()
pq.pop_back();
//clear()
pq.clear();
//Empty()
if(pq.empty())cout<<"Empty"<<endl;
else cout <<"Not Empty"<<endl;
//erase()
Priority_Queue<int> :: iterator it;
it = dq.at[i] << "" ;
pq.erase(it);
//size()
for(int i= 0; i< dq.size();i++)
{
    dq.at[i] << "";
  
}

cout <<endl;
//emplace
pq.emplace();
