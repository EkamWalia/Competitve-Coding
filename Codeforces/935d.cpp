#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;

  int a[n],b[n];
  int c = 0;

  for(int i=0; i<n;i++) {
    cin>>a[i];
    if(!a[i]) c++;
  }
  for(int i=0; i<n;i++) {
    cin>>b[i];
    if(!b[i]) c++;
  }

  long long int q = (long long int)m * c;

  long long int p = 0;
  for(int i=0;i<n;i++) {
    if(a[i] == 0 && b[i] == 0) {
      p += ( (long long int)m * (m-1) )/2;
    }
    else if()
  }

  return 0;
}
