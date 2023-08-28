#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<sizeof(s);i++)
    {
        int value=s[i]-'a';
        cout<<value<<" ";
    }
    // cout<<s;
}