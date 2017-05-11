#include<bits/stdc++.h>
using namespace std;
int main()
{
  int swap=0,n,t;
  string s;
  cin>>n>>t;
  cin>>s;
  char temp;

  for(int i=0;i<t;i++)
  { swap=0;
    for(int j=0;j<n;j++){
    if(s[j]=='B' && s[j+1]=='G')
    {
      temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
      j++;
      swap=1;
    }
   }
   if(swap==0) break;
  }

  cout<<s;
  return 0;

}
