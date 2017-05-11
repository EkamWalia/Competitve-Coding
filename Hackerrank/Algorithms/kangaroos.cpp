#include<bits/stdc++.h>
using namespace std;
int gcd(int p,int q)
{
  return p==0?q:gcd(q%p,p);
}
int main()
{
  int x1,v1,x2,v2;
  cin>>x1>>v1>>x2>>v2;
  if(v1<=v2) cout<<"NO\n";
  else
  {
    temp=(x2-x1)%(abs(v2-v1));
    if(temp==0)
    cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}
