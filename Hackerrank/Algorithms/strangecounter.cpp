#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t;
  cin>>t;
  ll i=3,j=1,prev=3;
  while(j<t)
  {
    i--;
    if(i==0){i=prev*2;prev=i;}
    j++;
  }
  cout<<i<<endl;
  return 0;
}
