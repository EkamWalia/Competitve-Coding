#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int temp,n,k,count=0,flag=1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
      cin>>temp;
      if(temp<=0) count++;
    }
    if(count>k) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
  return 0;

}
