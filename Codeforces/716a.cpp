#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c;
  cin>>n>>c;

  int tmp1,tmp2=0,num=0;

  for(int i=0;i<n;i++)
  {
    cin>>tmp1;
    if(i == 0) num++;
    else if(tmp1-tmp2 <= c ) num++;
    else num=1;
    tmp2 = tmp1;
  }

  cout<<num<<endl;
  return 0;
}
