#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v;
  cout<<v.capacity()<<endl;
  v.push_back(10);
  cout<<v.capacity()<<endl;
  v.push_back(4);
  cout<<v.capacity()<<endl;
  v.push_back(1);
  cout<<v.capacity()<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

    return 0;
}