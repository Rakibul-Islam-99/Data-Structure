#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  bool flag=false;
  for(int i=0;i<n;i++){
    if(v[i+1]==v[i]+1){
        flag=true;
    
    }
  }
  if(flag==true){
    cout<<"yes"<<endl;
  }
  else{
    cout<<"no"<<endl;
  }

    return 0;
}