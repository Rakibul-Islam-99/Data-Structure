#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5,6};
  vector<int>v2={10,20,30,40,50,60};
  v.insert(v.begin()+2,v2.begin(),v2.end());
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }


    return 0;
}