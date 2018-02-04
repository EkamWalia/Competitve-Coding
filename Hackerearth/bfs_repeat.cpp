#include<bits/stdc++.h>
using namespace std;
void bfs(vector<int>* adj , int n , int level[] , int s)
{
  int vis[n]={0};

  queue<int> q;

  q.push(s);
  vis[s]=1;

  while(!q.empty())
  {
      int p = q.front();
      q.pop();

      for(int i=0 , len = adj[p].size() ; i<len;i++)
      {
        if(vis[adj[p][i]] == 0)
        {
          vis[adj[p][i]] = 1;
          level[adj[p][i]] = level[p]+1;
          q.push(adj[p][i]);

          printf("%d %d \n" , adj[p][i] , level[adj[p][i]]);
        }
      }
  }
}
int main()
{
  int v,e;
  scanf("%d %d",&v,&e );
  vector<int> adj[v];

  for(int i=0,x,y;i<e;i++)
  {
    scanf("%d %d",&x,&y);
    x--;y--;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }
  int level[v]={0};

  int s;
  cin>>s;
  s--;
  bfs(adj , v,level ,s);

  for(int i=0;i<v;i++)
  {
    printf(" %d %d\n" , i+1 , level[i]);
  }
  return 0;
}
