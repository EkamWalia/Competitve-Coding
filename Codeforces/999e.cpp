#include<bits/stdc++.h>
using namespace std;
void dfs(int curr, int visited[] ,int concomp, vector<int>* adj);
int main()
{
  int n , edges, s;

  cin>>n>>edges>>s;

  vector<int> adj[n];

  int x,y;

  for(int i=0;i<edges;i++)
  {
      scanf("%d %d" , &x,&y);
   	  x--;y--;
      adj[x].push_back(y);
  }

  int visited[n]={0};
  int concomp=0;
  for(int i=0;i<n;i++)
  {
    if(visited[i] == 0)
    {
      concomp++;
      dfs(i,visited,concomp,adj);
    }
  }

  cout<<concomp-1<<endl;
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
