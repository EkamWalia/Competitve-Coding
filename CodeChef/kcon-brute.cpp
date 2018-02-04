// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

#define end '\n'
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout<<"Brute Force\n";
  
  int t;
  cin>>t;

  while(t--)
  {
    int n,k;
    cin>>n>>k;

    int a[n];
    int mini = -10000000;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];

         if(a[i] <= 0 ) mini = max(mini ,a[i] );
    }

    vector<int> v;

    for(int j=0;j<k;j++)
    {
      for(int i=0;i<n;i++)
        v.pb(a[i]);
    }

    ll maxsf = 0 , maxhere = 0;

    for(int i=0 ; i<n*k ; i++)
    {
        maxhere += v[i];
        if(maxhere < 0)
          maxhere = 0;
        else if(maxhere > maxsf)
          maxsf = maxhere;
    }

    if(maxsf == 0) maxsf = mini;
    cout<<maxsf<<end;
  }
  return 0;
}
