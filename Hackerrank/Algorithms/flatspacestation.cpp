#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  cin>>n>>m;
  int temp,a[n]={0};
  while(m--)
  {
    cin>>temp;
    a[temp]=1;
  }
  int count=0,maximum=0;
  for(int i=0;i<n;i++)
  {
     if(a[i]==1)
     {
       maximum=max(maximum,count);
       count=0;
     }
     else
     {
       count++;
     }
  }

  cout<<maximum<<endl;

  return 0;
}
