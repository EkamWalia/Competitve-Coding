#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  int count=0;

  for(int i=1;i<n;i++) {
    int emp = n-i;
    //cout<<i<<" "<<emp<<endl;
    if(emp%i == 0) {count++;}
  }

  cout<<count<<endl;
}
