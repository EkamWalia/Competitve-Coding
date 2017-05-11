#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n],count=0,maximum=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];

  }

  for(int i=0;i<n-1;i++)
  {
    if(a[i+1]>=a[i])
    {
      count++;
    }
    else
    {
      maximum=max(count,maximum);
      count=0;
    }
  }

  cout<<max<<endl;
  return 0;
}
