#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  string s;
  cin>>s;
  int temp,a[26]={0};
  for(int i=0;i<n;i++)
  {
    s[i]=tolower(s[i]);
    temp=s[i]-'a';
    a[temp]=1;
  }
  int flag=0;
  for(int i=0;i<26;i++)
  {
    //cout<<(char)((int)'a'+i)<<" "<<a[i]<<endl;
    if(a[i]==0)
    {
      cout<<"NO\n";
    //  cout<<(char)((int)'a'+i)<<endl;
      flag=1;
      break;
    }
  }

  if(flag==0) cout<<"YES\n";
  return 0;
}
