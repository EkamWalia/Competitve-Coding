#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    string t="hackerrank";
    int flag=0;
    int n=s.length(),m=t.length();
    for(int i=0,j=0;i<n;i++)
    {
      if(s[i]==t[j])
      {
        j++;
      }
      if(j==m)
      {
        cout<<"YES\n";
        flag=1;
        break;
      }
    }
    if(flag==0) cout<<"NO\n";
  }
  return 0;
}
