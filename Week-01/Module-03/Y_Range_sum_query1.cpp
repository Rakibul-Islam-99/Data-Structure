#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,q;cin>>n>>q;
  int ar[n];
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }
  int pre[n];
  pre[0]=ar[0];
  for(int i=1;i<n;i++)
  {
    pre[i]=ar[i]+pre[i-1];
  }
 
  while(q--)
  {
    int l,r;cin>>l>>r;
    l--;
    r--;
    int sum;
    if(l==0) sum=pre[r];
    else sum=pre[r]-pre[l-1];
    cout<<sum<<endl;
  }

    return 0;
}