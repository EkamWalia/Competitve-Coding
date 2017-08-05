#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++)
  {
     int temp=a[n-1-i];
  for(int i=n-2;i>=0;i--)
  {
    if(a[i]>temp)
    {
      a[i+1]=a[i];
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
      cout<<endl;
    }
    else
    {
      a[i+1]=temp;
      for(int i=0;i<n;i++) cout<<a[i]<<" ";
      cout<<endl;
      break;
    }
  }}
  return 0;
}
