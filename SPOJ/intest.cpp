// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;
  cin>>n>>k;
  int c = 0;

  while(n--)
  {
    int temp;
    cin>>temp;

    if(!(temp%k))
      c++;
  }

  cout<<c<<"\n";
  return 0;
}
