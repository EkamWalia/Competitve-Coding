// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char c;
  cin>>c;
  string s,t="";
  cin>>s;

  string k1 = "qwertyuiop";
  string k2 = "asdfghjkl;";
  string k3 = "zxcvbnm,./";

  for(int i=0,l=s.size(); i<l;i++)
  {
    for(int j=0;j<10;j++)
    {
      if(k1[j] == s[i])
      {
          c == 'R' ? t+=k1[j-1] : t+=k1[j+1];
      }
      else if(k2[j] == s[i])
      {
        c == 'R' ? t+=k2[j-1] : t+=k2[j+1];

      }
      else if(k3[j] == s[i])
      {
        c == 'R' ? t+=k3[j-1] : t+=k3[j+1];
      }
    }

  }

  cout<<t<<endl;
  return 0;
}
