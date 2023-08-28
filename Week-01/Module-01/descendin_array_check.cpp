#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=true;

        for(int i=0;i<n-1;i++)
        {
            if(v[i+1]>v[i]){
                flag=false;
                break;
            }
        }
        if(flag==false)
        {
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }

    }
  

    return 0;
}