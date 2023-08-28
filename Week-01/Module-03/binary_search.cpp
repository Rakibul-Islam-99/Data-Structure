#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long x;
    cin>>x;
    long long l=0;
    long long r=n-1;
    bool Flag=false;

    while(l<=r)
    {
         long long mid_index=(l+r)/2;
       if(a[mid_index]==x){
        Flag=true;
        break;
       }
        if(x>a[mid_index]){
        l=mid_index+1;
       }
       else{
        r=mid_index-1;
       }
    }

    if(Flag==true){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
  

    return 0;
}