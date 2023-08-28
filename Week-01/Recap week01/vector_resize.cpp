#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  cout<<v.size()<<endl;
  v.resize(3);
   cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
 
//   cout<<v.capacity()<<endl;


    return 0;
}