#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  int a[n],b[m];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  int alcm,bgcd=1;
  alcm=a[0];
  for(int i=1;i<n;i++)
  {
    alcm=(a[i]*alcm)/gcd(a[i],alcm);
  }

  for(int i=0;i<m;i++)
  {
    bgcd=gcd(gcd,a[i]);
  }
  int x=bgcd/alcm,count=0;

  for(int i=1;i<=x;i++)
  {
    if(bgcd%(alcm*i) == 0) count++;
  }
  cout<<count<<endl;
  return 0;
}
