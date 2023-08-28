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
  int cnt[n+1]={0};
  for(int i=0;i<n;i++){
    cnt[v[i]]++;
  }
  for(int i=0;i<n+1;i++){
    if(cnt[i]!=0)
    cout<<i<<"="<<cnt[i]<<endl;
  }


    return 0;
}