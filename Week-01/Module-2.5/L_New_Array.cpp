#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n;cin>>n;
    vector<int>a(n);
    for(int j=0;j<n;j++){
        cin>>a[j];

    }
    vector<int> b(n);
    for(int j=0;j<n;j++){
        cin>>b[j];
    }
    
    b.insert(b.end(),a.begin(),a.end());
    for(int j=0;j<b.size();j++)
    {
        cout<<b[j]<<" ";
    }


  
    return 0;
}