#include<bits/stdc++.h>
using namespace std;
int main()
{
//   vector<int> v; //type1
//   vector<int> v(5); //type 2
// vector<int> v(5,10); //type3
// vector<int> v2(5,25);//type 4
// vector<int> v(v2);
int a[6]={12,23,76,34,39,57}; //type 5
vector<int> v(a,a+6);
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;

  cout<<v.size()<<endl;

    return 0;
}