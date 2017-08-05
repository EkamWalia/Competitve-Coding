#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int num=0,dist=0;
  sort(a,a+n);
  for(int i=0;i<n;i++)
  {
    dist+=a[i];
    if(dist>=k)
    {
      num++;
      dist=0;
    }

  }
  //int min=a[0],max=a[n-1];

//  cout<<num=max-min/2k<<endl;

  return 0;
}
