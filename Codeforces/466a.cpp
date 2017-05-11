#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int temp1=(n/m)*b + (n%m)*a;
  int temp2=n*a;
  cout<<temp1<<" "<<temp2<<endl;
  temp1>=temp2?cout<<temp2<<endl:cout<<temp1<<endl;

  return 0;
}
