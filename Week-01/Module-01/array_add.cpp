#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int> v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int y;
    cin>>y;
    vector<int>v2(y);
    for(int i=0;i<y;i++){
        cin>>v2[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<y;i++){
        replace(v.begin()+k,v.end(),v[i+k],v2[i]);
        
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    



  

    return 0;
}