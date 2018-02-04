// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define end '\n'
x
typedef long long int ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;

    int a[n][n];
    int ma = -1;
    for(int i=0 ; i<n ; i++)
    {
      for(int j=0;j<n;j++)
      {
         cin>>a[i][j];
         if(i == n-1)
          ma = max(ma, a[i][j]);
      }
    }

  ll sum = ma;
  int mini , flag = 1;

  for(int i= n-2  ; i>-1 ; i--)
  {
    mini = -1;
    for(int j=0 ; j<n ; j++)
    {
      if(a[i][j] < ma)
        mini = max(mini , a[i][j]);
    }

    if(mini == -1)
    {
      flag = 0;
      break;
    }
    sum += mini;
    ma = mini;
  }

  flag ? cout<<sum<<end : cout<<"-1\n";

}
  return 0;
}
