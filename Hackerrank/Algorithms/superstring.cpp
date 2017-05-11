#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int n=s.length();
  char t[n];
  int j,flag=0;
  while(flag==0)
  { s=t;
    cout<<s;
    j=0;
    flag=1;
    for(int i=0;i<n;i++)
    {
      if(s[i]==s[i+1])
      {
          i+=1;
          flag=0;
      }
      else
      {
        t[j]=s[i];
        j++;
      }
    }
  }
  t[j]='\0';
  strlen(t)==0?cout<<"Empty String\n":cout<<t<<endl;
  return 0;
}
