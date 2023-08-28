#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> a={11,22,33,44,55,66,77,88};
  vector<int> v={1,2,3,4,5,6,7};
  v=a;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;

    return 0;
}