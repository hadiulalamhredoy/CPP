//Deque Declaration 
#include<bits/stdc++.h>
 using namespace std;
int main()
{
    deque<int> dq;
}
//push_back()
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);
//push_front()
dq.push_front(4);
dq.push_front(5);
//print deque vaule 
for(int i =0;i<dq.size();i++)
{
   cout<<dq[i]<<"";
}
//front()
cout<<dq.front() <<endl;
//back()
cout<<dq.back()<<endl;
//pop_back()
dq.pop_back();
//clear()
dq.clear();
//Empty()
if(dq.empty())cout<<"Empty"<<endl;
else cout <<"Not Empty"<<endl;
//erase()
deque<int> :: iterator it;
it = dq.at[i] << "" ;
dq.erase(it);
//size()
for(int i= 0; i< dq.size();i++)
{
    dq.at[i] << "";
  
}

cout <<endl;
