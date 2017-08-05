#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int a[26]={0};
  for(int i=0,n.length();i<n;i++)
  {
    s[i]=tolower(s[i]);
    temp=s[i]-'a';
    a[temp]++;
  }

  for(int i=0;i<26;i++)
  {
    if(a[i]==0)
    {
      cout<<"not pangram\n";
      return 0;
    }
  }
  cout<<"pangram\n"
  return 0;
}
