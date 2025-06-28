//Declaration of set 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
}
//insert
ms.insert(10);
ms.insert(20);
ms.insert(30);
ms1.insert(40);
ms1.insert(50);
ms1.insert(60);
//size()
cout<<ms.size()<<endl;
//max_size
cout<<ms.max_size()<<endl;
//begin(),end()
multiset<int>::iterator it;
for(it = ms.begin();it!ms=end();it++)
{
    cout<<it<<endl;
}
  cout<<endl
//find()
auto it :: iteration it;
it = s.find(2);
if(it!=ms.end()) cout<<"Find"<<endl;
else cout <<"Not Find"<<endl;
//count()
int c = ms.count();
cout<<c<<endl;
//lower bound()
set<int> ms = {1,2,3,4,5,6};
for(auto it : ms ) cout <<it<<"";
cout<<endl;
it  = ms.lowerbound(2));
if(it == ms.end())
{
    cout<<"The Element is larger than to the greter than greater Element";
}
else{
    cout<<"The Lower bound of 2 is <<*it<<endl;
}
//upper bound()
set<int> ms = {1,2,3,4,5,6};
for(auto it : ms ) cout <<it<<"";
cout<<endl;
it  = ms.lowerbound(2));
if(it == ms.end())
{
    cout<<"The Element is smaller than to the less than greater Element";
}
else{
    cout<<"The Upper bound of 2 is <<*it<<endl;
}
//emplace()
ms.emplace(1);
//swap()
ms.swap(ms1);
//Operator()
ms1=ms;
for(auto it : ms1) cout<<it<<"";
cout<<endl;
