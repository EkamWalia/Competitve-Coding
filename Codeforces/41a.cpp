#include<iostream>
using namespace std;
int main()
{
  string s,t;
  cin>>s>>t;
  if(s.length()!=t.length())
  {
    cout<<"NO\n";
    return 0;
  }
  int flag=0,l=s.length();
  for(int i=0,j=l-1;i<l;i++,j--)
  {
    if(s[i]!=t[j])
    {
      flag=1;
      break;
    }
  }
  flag==0?cout<<"YES\n":cout<<"NO\n";
  return 0;
}
