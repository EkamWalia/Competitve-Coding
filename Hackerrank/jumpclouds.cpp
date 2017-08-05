#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,e=100;
  cin>>n>>k;

  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];

  int i=0;
  do
  {
    i=(i+k)%n;
    if(a[i]==0) e--;
    else if(a[i]==1) e-=3;
  }while(i!=n);

  cout<<e<<endl;
  return 0;
}
