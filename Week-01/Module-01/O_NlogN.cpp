#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
  // Time Complexity O(NlogN)
  for(int i=1;i<=n;i++)// O(N)
  {
    int x=i;
    while(x>0)// O(log(N))
    {
        int digit=x%10;
        cout<<digit<< " ";
        x=x/10;
    }
    cout<<endl;
  }

    return 0;
}