// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

bool sortbysec(const pair<int , int> &a , const pair<int , int> &b)
{
  return (a.second < b.second);
}

int main()
{
  int n,p,k;
  scanf("%d %d %d",&n,&p,&k);

  vector<pair<int,int> > v;

  int dp[n] ={0}, count=0;

  for(int i=0 ;i<n ; i++)
  {
    int a;
    scanf("%d",&a);
    v.pb(mp(i,a));
  }

  sort(v.begin() , v.end() , sortbysec);

  for(int i=0;i<n-1;i++)
  {
    dp[v[i].first] = i;
    /*
    if(v[i+1].second - v[i].second <= k)
    {
      dp[v[i+1].first] = count;
    }
    else                                              // O(N)
    {
      count++;
      dp[v[i+1].first] = count;
    }*/

    int j = i+1;
    while(j<n && v[j].second<= v[j-1].second + k)
    {
      dp[v[j].first] = i;
      j++;
    }
    i = j-1;
  }

  for(int i=0;i<n;i++)
  {
    cout<<"DP "<<i<<" = "<<dp[i]<<'\n';
  }
  while(p--)
  {
    int a,b;
    scanf("%d %d",&a , &b);
    a-- ; b--;
    dp[a] == dp[b] ? printf("Yes\n") : printf("No\n");
  }
  return 0;
}
