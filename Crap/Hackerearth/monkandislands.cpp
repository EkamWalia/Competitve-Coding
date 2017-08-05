#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v,u,s;
        cin>>v>>u;        
        s=0;
        int x,y;
    
        vector<int> adj[v];
        for(int i=0;i<u;i++)
        {
            scanf("%d %d",&x,&y);
            adj[x-1].push_back(y-1);
            adj[y-1].push_back(x-1);
        }
    

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

        /*if(visited[n-1] == 1)
        {
            break;
        }*/
            for(int i=0;i<adj[p].size();i++)
            {
                if(visited[adj[p][i]] == 0)
                {
                    level[adj[p][i]] = level[p] + 1;
                    visited[adj[p][i]] = 1;
                    q.push(adj[p][i]);
                }

                if(adj[p][i] == v-1) break;
            }

        }

        printf("%d\n",level[v-1]);
    }
    return 0;
}