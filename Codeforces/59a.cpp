#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n=s.length();
  int caps=0,small=0;
  for(int i=0;i<n;i++)
  {
    if(s[i]>='A' && s[i]<='Z') caps++;
    else small++;
  }

  if(small>=caps)
  {
    for(int i=0;i<n;i++)
      s[i]=tolower(s[i]);
  }
  else
  {
    for(int i=0;i<n;i++)
    s[i]=toupper(s[i]);
  }
  cout<<s<<endl;

  return 0;
}
