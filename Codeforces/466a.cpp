#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int temp1=((n+m-1)/m)*b; 
  int temp3 = (n/m)*b + (n%m)*a;
  int temp2=n*a;
  cout<<min(temp1,min(temp2,temp3))<<endl;

  return 0;
}
