#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(a-c)==abs(b-c)) cout<<"Mouse C\n";
    else if(abs(a-c)>abs(b-c)) cout<<"Cat B\n";
    else cout<<"Cat A\n";
  }
  return 0;
}
