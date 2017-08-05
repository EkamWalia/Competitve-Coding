#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector <int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  int mini;
  int count=n;
  while(count!=0)
  {
    cout<<count<<endl;
    count=0;
    for(int i=0;i<n;i++)
    {
      v[i]-=mini;
      if(v[i]!=0) count++;
    }
    int flag=1;
    for(int i=0;i<n;i++)
    {
      if(flag==1 && v[i]!=0) {mini=v[i];flag=0;}
      else if(flag==0) mini=min(v[i],mini);
    }
    cout<<"mini ="<<mini<<endl;

  }
  return 0;
}
