#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<int> v(5,2);
int a[5]={1,4,8,6,2};
vector<int> v(a,a+5);
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;
  cout<<v.size();

    return 0;
}