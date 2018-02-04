#include<bits/stdc++.h>
using namespace std;
int main()
{

    int v,u,s;
    printf("Enter number of nodes & edges\n");
    cin>>v;
    s=1;u=v-1;
    int x,y;
    
    vector<int> adj[v];
    for(int i=0;i<u;i++)
    {
        scanf("%d %d",&x,&y);
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);
    }
    
    int z;
    scanf("%d",&z);

    int level[v] = {0};
    int visited[v] = {0};

    queue <int> q;
    q.push(s);
    level[s] = 0;
    visited[s] = 1;

    while( !q.empty())
    {
        int p = q.front();
        q.pop();

        if(level[p] == z)
        {
            break;
        }
        for(int i=0;i<adj[p].size();i++)
        {
            if(visited[adj[p][i]] == 0)
            {
                level[adj[p][i]] = level[p] + 1;
                visited[adj[p][i]] = 1;
                q.push(adj[p][i]);
            }
        }

    }
    int count=0;
    for(int i=0;i<v;i++)
    {
        if(level[i] == z-1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}