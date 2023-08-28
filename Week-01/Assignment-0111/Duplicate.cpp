#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<long long > v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
 int cnt[n+1]={0};
  for(int i=0;i<n;i++){
      int value=v[i];
    cnt[value]++;
  }
  int flag=0;
  for(int i=0;i<n+1;i++){
    if(cnt[i]>1){
        flag=1;
        break;
    }
  }
  if(flag==0){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
    return 0;
}