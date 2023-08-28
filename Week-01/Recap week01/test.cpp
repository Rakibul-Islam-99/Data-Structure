#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<int>v;
// vector<int >v(5);
// vector<int>v2(5,120);
// vector<int>v(v2);
// int a[6]={1,2,3,4,5,6};
// vector<int>v(a,a+6);
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }
// cout<<endl;
//   cout<<v.size()<<endl;
vector<int>v;
cout<<v.max_size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(10);
cout<<v.capacity()<<endl;
v.push_back(12);
cout<<v.capacity()<<endl;
v.push_back(34);
cout<<v.capacity()<<endl;
v.push_back(23);
cout<<v.capacity()<<endl;
v.push_back(28);
cout<<v.capacity()<<endl;
v.push_back(3);
cout<<v.capacity()<<endl;
v.push_back(76);
v.push_back(47);
v.push_back(98);


    return 0;
}