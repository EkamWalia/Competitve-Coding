// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);

  vector<int> v[m+1];

  for(int i=0;i<n;i++)
  {
    int temp1 , temp2;
    scanf("%d %d",&temp1 , &temp2);

    for(int j=temp1 +1 ; j<=temp2 ; j++)
    {
      v[temp1].push_back(j);
    }
  }

  int vis[m+1] ={0};

  queue<int> q;
  int s = 0;
  q.push(s);
  vis[s] = 1;

  while(!q.empty())
  {
      int p = q.front();
      q.pop();
      for(int i=0 , l = v[p].size() ; i<l ; i++)
      {
        if(vis[v[p][i]] == 0)
        {
          vis[v[p][i]] = 1;
          q.push(v[p][i]);
        }
      }
  }

  /*for(int i=0;i<m;i++) printf("%d ",vis[i]);
  printf("\n");*/
  vis[m] == 1 ? printf("yes\n") : printf("no\n");

  return 0;
}
