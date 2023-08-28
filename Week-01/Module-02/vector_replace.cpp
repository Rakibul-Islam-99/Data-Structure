#include<bits/stdc++.h>
using namespace std;
int main()
{
    // replace 
  vector<int> v={1,2,3,4,2,67,89,2,2,2,21,8};
  replace(v.begin(),v.end(),2,100);
  for(int x:v)
  {
    cout<<x<<" ";
  }
  cout<<endl;
//   find

auto it=find(v.begin(),v.end(),3);
if(it==v.end()){
    cout<<"Not found";
}
else{
    cout<<"Found "<<*it;
}


    return 0;
}