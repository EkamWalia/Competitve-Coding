#include<bits/stdc++.h>
using namespace std;
void dfs(int curr, int visited[] ,int concomp, vector<int>* adj);
int main()
{
  int n , edges;
  scanf("%d %d" , &n  ,&edges);

  vector<int> adj[n];

  int x,y;

  for(int i=0;i<edges;i++)
  {
      scanf("%d %d" , &x,&y);
      adj[x].push_back(y);
      adj[y].push_back(x);
  }

  int visited[n]={0};
  int concomp=0,ways=0;
  for(int i=0;i<n;i++)
  {
    if(visited[i] == 0)
    {
      concomp++;
      dfs(i,visited,concomp,adj);
    }
  }

  int components_count[concomp+1]={0};
  for(int i=0;i<n;i++)
  {
    components_count[visited[i]]++;
  }


  for(int i=1;i<concomp;i++)
  {
    n-=components_count[i];
    ways+= (n*components_count[i]);
  }

  printf("%d\n" , ways);
  return 0;
}

void dfs(int curr, int visited[] ,int concomp , vector<int>* adj)
{
  visited[curr] = concomp;
  for(int i=0 ,len = adj[curr].size() ; i<len ; i++)
  {
    if(visited[adj[curr][i]] == 0)
    {
      dfs(adj[curr][i] , visited ,concomp , adj);
    }
  }
}
