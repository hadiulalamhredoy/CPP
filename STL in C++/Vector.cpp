//Declaration Vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[100];
     vector<int>v1;
}
//push_back()
v1.push_back(10);//v[0];
v1.push_back(20);//v[1];
v1.push_back(30);//v[2];
//how to print the vector vaule
cout<<v[0]<<endl;
//size()
cout<<v.at(0) <<" ";
//front()
cout<<v.front<<endl;
//back()
cout<<v.back()<<endl;
//clear()
cout<<v.clear();
//empty()
if(v.empty())cout<<"Empty"<<endl;
else cout<<"Not Empty"<<endl;
//pop_back()
v.pop_back();
for(int i = 0; i < v.size();i++)
{
    cout<<v[i] << "";
}
//erase()
v.erase(v.begin()+v.end());
for(int i = 0; i<v.size();i++)
{
    cout<<v[i] <<"";
}
//insert()
v.insert(v.begin()+1,2,3,4)
for(int i = 0; i<v.size();i++)
{
   cout<<v[i]<<"";
}
//swap()
vector<int>v1;
vector<int>v2;
v2.push_back(40);//v[3];
v2.push_back(50);//v[4];
v2.push_back(60);//v[5]

cout<<"Before  swapping"<<endl;
for(int i = 0; i<v1.size();i++)
{
   cout<<v1[i]<<"";
}
cout<<endl;


for(int i = 0; i<v2.size();i++)
{
   cout<<v2[i]<<"";
}
cout<<endl;
swap(v1,v2);
cout<<"after swapping"<<endl;

for(int i = 0; i<v1.size();i++)
{
   cout<<v1[i]<<"";
}
cout<<endl;


for(int i = 0; i<v2.size();i++)
{
   cout<<v2[i]<<"";
}


//Sort()
v1.push_back(10)
v1.push_back(20);
v1.push_back(30);
cout<<"Before Sorting"<<endl;

for(int i = 0; i<v1.size();i++)
{
   cout<<v1[i]<<"";
}
cout<<endl;
sort(v1.begin(),v1.end());
cout<<"After Sorting"<<endl;
for(int i = 0; i<v2.size();i++)
{
   cout<<v2[i]<<"";
}
//Reverse
v1.push_back(10)
v1.push_back(20);
v1.push_back(30);
cout<<"Before Reversing"<<endl;

for(int i = 0; i<v1.size();i++)
{
   cout<<v1[i]<<"";
}
cout<<endl;
sort(v1.begin(),v1.end());
cout<<"After Reversing"<<endl;
for(int i = 0; i<v2.size();i++)
{
   cout<<v2[i]<<"";

}
//Iteration 
vector<int>::iterator it;
for(it v.begin():it(v=end();it++)
{
    cout<<<int<<endl;
}

