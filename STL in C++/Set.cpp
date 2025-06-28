//Declaration of set 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
}
//insert
s.insert(10);
s.insert(20);
s.insert(30);
s1.insert(40);
s1.insert(50);
s1.insert(60);
//size()
cout<<s.size()<<endl;
//max_size
cout<<s.max_size()<<endl;
//begin(),end()
set<int>::iterator it;
for(it = s.begin();it!s=end();it++)
{
    cout<<it<<endl;
}
  cout<<endl
//find()
auto it :: iteration it;
it = s.find(2);
if(it!=s.end()) cout<<"Find"<<endl;
else cout <<"Not Find"<<endl;
//count()
int c = s.count();
cout<<c<<endl;
//lower bound()
set<int> s = {1,2,3,4,5,6};
for(auto it : s ) cout <<it<<"";
cout<<endl;
it  = s.lowerbound(2));
if(it == s.end())
{
    cout<<"The Element is larger than to the greter than greater Element";
}
else{
    cout<<"The Lower bound of 2 is <<*it<<endl;
}
//upper bound()
set<int> s = {1,2,3,4,5,6};
for(auto it : s ) cout <<it<<"";
cout<<endl;
it  = s.lowerbound(2));
if(it == s.end())
{
    cout<<"The Element is smaller than to the less than greater Element";
}
else{
    cout<<"The Upper bound of 2 is <<*it<<endl;
}
//emplace()
s.emplace(1);
//swap()
s.swap(s1);
//Operator()
s1=s;
for(auto it : s1) cout<<it<<"";
cout<<endl;
