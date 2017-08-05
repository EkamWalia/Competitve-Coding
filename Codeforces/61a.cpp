#include<bits/stdc++.h>
using namespace std;
int main()
{
  string n,m;
  cin>>n>>m;

  for(int i=0,len=n.length();i<len;i++)
  {
    if(n[i] == m[i])
    {
      printf("0");
    }
    else
      printf("1");
  }

  printf("\n");

  return 0;
}
