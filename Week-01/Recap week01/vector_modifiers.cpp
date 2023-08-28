#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={1,2,3,4,5};
  vector<int> x={10,20,30,40,50,5};
  v=x;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

    return 0;
}