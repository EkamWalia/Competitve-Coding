#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s,n,m;
  cin>>s>>n>>m;
  int key[n],usb[m];
  for(int i=0;i<n;i++) cin>>key[i];
  for(int i=0;i<m;i++) cin>>usb[i];

  int max=-1;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(key[i]+usb[j] >= max && key[i]+usb[j]<=s)
      {
        max=key[i]+usb[j];
      }
    }
  }

  max==-1?cout<<"-1\n":cout<<max<<endl;
  return 0;
}
