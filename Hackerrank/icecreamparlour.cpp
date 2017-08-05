#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  cout<<t<<endl;
  while(t--)
  {
    int n,m;
    cin>>m>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(a[i]+a[j]==m)
        {
          cout<<i<<" "<<j<<endl;
          break;
        }
      }
    }
  }
  return 0;
}
