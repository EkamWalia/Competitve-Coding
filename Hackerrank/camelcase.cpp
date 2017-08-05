#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int count=1;
  int i=0;
  while(s[i]!='\0')
  {
    if(s[i]>='A' && s[i]<='Z') count++;
    i++;
  }

  cout<<count<<endl;
  return 0;
}
