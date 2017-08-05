#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>* adj, int s , bool vis[])
{
  vis[s] = true;

  for(int i=0 , n=adj[s].size();i<n;i++)
  {
    if(vis[adj[s][i]] == false)
      dfs(adj , adj[s][i] , vis);
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

  bool vis[v] = {false};

  int conncomps=0;

  for(int i=0;i<v;i++)
  {
    if(vis[i] == false)
    {
      conncomps++;
      dfs(adj,i,vis);
    }
  }

    printf(" %d\n" ,conncomps);

  return 0;
}
