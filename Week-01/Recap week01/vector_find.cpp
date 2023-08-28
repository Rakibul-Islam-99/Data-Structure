#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5,6,78,9};
  auto it=find(v.begin(),v.end(),30);
  if(it==v.end()) cout<<"Not Found"<<endl;
  else cout<<"Found";



//   vector<int>::iterator it;
//   it=find(v.begin(),v.end(),5);
//   cout<<*it<<endl;
//   for(int x:v)
//   {
//     cout<<x<<" ";
//   }

    return 0;
}