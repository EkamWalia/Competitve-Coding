#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cin>>s1;
    s=s1;
    int flag=0,length=s.length();
    s[0]=toupper(s[0]);
    for(int i=1;i<length;i++)
    { 
      if(s[i]>='A'&&s[i]<='Z')
         s[i]=tolower(s[i]);
      else 
      { flag=1;
      	break;
      }
    }
    if(flag==1) cout<<s1;
    else cout<<s;
    return 0;
}