#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int grade;
    cin>>grade;
    if(grade<38) cout<<grade<<endl;
    else if(grade>=38 && grade<=40) cout<<"40"<<endl;
    else if(grade%5>=3) cout<<grade+5-grade%5<<endl;
    else cout<<grade<<endl;
  }
  return 0;
}
