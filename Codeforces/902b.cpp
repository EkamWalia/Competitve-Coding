// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> v[] , int vis[] , int col , int i)
{

  vis[i] = col;

  for(int j=0 , l=v[i].size() ; j<l ; j++)
  {
    if(vis[v[i][j]] != col)
    {
      dfs(v , vis , col , v[i][j]);
    }
  }
}
int main()
{
  int n;
  scanf("%d" , &n);

  vector<int> v[n+1];

  int vis[n+1] ={0} , col[n+1];

  for(int i = 2 ;  i<n +1 ; i++)
  {
    int temp;
    scanf("%d",&temp);
    v[temp].push_back(i);
  }

  for(int i=1 ; i < n+1 ; i++)
  {
    scanf("%d",&col[i]);
  }
  
  int steps = 0;

  for(int i=1 ; i<n+1 ; i++)
  {
    if(vis[i] != col[i])
    {
      dfs(v , vis , col[i] , i);
      steps++;
    }
  }


  printf("%d\n", steps);
  return 0;
}
