#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  cin>>n>>t;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];

  while(t--)
  {
    int i,j;
    cin>>i>>j;
    int max=3;
    for(int k=i;k<=j;k++)
    {
      if(a[k]<max) max=a[k];
    }
    cout<<max<<endl;
  }
  return 0;
}
