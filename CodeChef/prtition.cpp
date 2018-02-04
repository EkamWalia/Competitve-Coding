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
    int x,n;
    cin>>x>>n;

    ll sum = ((ll)n*(n+1))/2 - x;

    if(sum%2 || n<=2)
      cout<<"impossible\n";
    else
    {
      sum /= 2;
      int a[n+1];

      ll curr = 0;
      int flag = 1;
      for(int i=n ; i>0 ; i--)
      {
        if(i == x) a[i] = 2;
        else if(!flag)
          a[i] = 1;
        else if((ll)curr + i < sum)
        {
          a[i] = 0;
          curr += i;
        }
        else if((ll)curr + i == sum)
        {
          a[i] = 0;
          flag = 0;
        }
        else
        {
          a[i] = 1;
        }
      }

      for(int i=1;i<n+1 ; i++) cout<<a[i];
      cout<<end;
    }
  }
  return 0;
}
