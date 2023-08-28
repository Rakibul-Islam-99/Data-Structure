#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  int temp=0;
  int result=0;
  int cnt=0;
  for(int i=0;i<n;i++)
  {
    if(i==0){
        temp=v[i];
        result=1;
    }
    else{
        if(temp==v[i]){
            result++;
        }
        else if(temp+1==v[i]){
            cnt+=result;
            temp=v[i];
            result=1;
        }
        else{
            result=1;
            temp=v[i];
        }
    }

  }
 
  cout<<cnt<<endl;;
  

    return 0;
}