#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s,t;
  cin>>s>>t;
  int a,b;
  cin>>a>>b;
  int m,n;
  cin>>m>>n;
  int apples[m],oranges[n];

  for(int i=0;i<m;i++) cin>>apples[i];
  for(int i=0;i<n;i++) cin>>oranges[i];

  int app=0,org=0;
  for(int i=0;i<m;i++)
  {
    if(apples[i]+a>=s && apples[i]+a<=t)  app++;
  }

  for(int i=0;i<n;i++)
  {
    if(b+oranges[i]<=(t) && b+oranges[i]>=(s)) org++;
  }

  cout<<app<<endl<<org<<endl;
  return 0;
}
