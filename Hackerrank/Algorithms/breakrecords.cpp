#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int minimum=a[0],maximum=a[0];
  int l=0,h=0;
  for(int i=1;i<n;i++)
  {
    if(minimum>a[i])
    {
      l++;
      minimum=a[i];
    }
    if(maximum<a[i])
    {
      h++;
      maximum=a[i];
    }
  }

  cout<<h<<" "<<l<<endl;
  return 0;
}
