  // Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

#define forr(i,n) for(int i=0;i<n;i++)
#define test int t;cin>>t;while(t--)
#define foreach(it , l)  for(auto it = l.begin() ; it != l.end() ; it++)

#define end '\n'
#define minus "-1\n"
#define  mod 1000000007

#define ugcd int gcd(int a, int b){ if (a == 0) return b; return gcd(b%a, a); }
#define all(v) v.begin(),v.end()

typedef long long int ll;
typedef vector<int> vi;
typedef vector<pair<int,int> > vpi;
typedef pair<int,int> pi;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  test
  {
    int n,k;
    cin>>n>>k;

    int a[n];
    int mini = -10000000;
    ll s=0;
    forr(i,n)
    {
         cin>>a[i];
         s+=a[i];
         if(a[i] <= 0 ) mini = max(mini ,a[i] );
    }


    ll maxpa = 0,maxsf = 0 , maxhere = 0;

    int i=0;
    int p=-1 ,r=0, q = 0;
    int x = 2;
    while(x--)
    {
      for(; i<n*2 ; i++)
      {
          //cout<<i<<" "<<a[i%n]<<end;
          maxhere += a[i%n];
          if(maxhere < 0)
          {
            maxhere = 0;
            r = i+1;
          }
          {
            maxsf = maxhere;
            else if(maxhere > maxsf)
            p = r;
            q = i;
          }
      }
      if(x == 1)
        maxpa = maxsf;
    }

    if(p == -1)
      cout<<mini<<end;
    else if(q < n)
        cout<<maxpa<<end;
    else
    {
      ll ans = maxsf + (k-2) * s;
      cout<<ans<<end;
    }
  }
  return 0;
}
