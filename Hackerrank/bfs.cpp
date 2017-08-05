
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;

  cin>>q;
  while(q--)
  {
    int n,m;
    cin>>n>>m;
    int x,y;

    vector <int> v[n+1];

    for(int i=0;i<m;i++)
    {
      cin>>x>>y;
      v[x-1].push_back(y-1);
      v[y-1].push_back(x-1);
    }

    int s;
    cin>>s;
    s--;
    int level[n] , vis[n]={0};
    memset(level,-1,n*sizeof(level[0]));
    queue <int> q;
    q.push(s);
    level[s] = 0;
    vis[s] = 1;

    while(!(q.empty()))
    {
      int  p = q.front();
      q.pop();
      for(int i=0,len = v[p].size() ; i<len ; i++)
      {
        if(vis[v[p][i]] == 0)
        {
           level[v[p][i]] = level[p]+6;
           vis[v[p][i]] = 1;
           q.push(v[p][i]);
        }
      }
    }

    for(int i=0;i<n;i++)
    {
      if(i == s)
      {
        continue;
      }
      else
      {
         cout<<level[i]<<" ";
      }

    }
    cout<<endl;
  }
  return 0;
}
