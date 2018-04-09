#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  string s;
  cin>>s;

  int  count = 0;
  int x=0,y =0;

  for(int i=0;i<n;i++) {

    s[i] == 'U' ? y++ : x++ ;

    if(x == y && s[i] == s[i+1]) {count++;}
    //cout<<s[i]<<" "<<x<<" "<<y<<endl;
  }

  cout<<count<<endl;
}
