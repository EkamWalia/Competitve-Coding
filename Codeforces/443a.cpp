#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);

  int temp,a[26]={0};
  for(int i=0,n=s.length();i<n;i++)
  {
    if(isalpha(s[i]))
    {temp=s[i]-'a';
    a[temp]++;}
  }

  int count=0;
  for(int i=0;i<26;i++)
  {
    if(a[i]!=0) count++;
  }

  cout<<count<<endl;
  return 0;
}
