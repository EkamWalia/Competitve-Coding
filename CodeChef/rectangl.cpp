// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  cin>>a>>b>>c>>d;
  while(t--)
  {
    int a,b,c,d;

    if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)) cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}
