#include<bits/stdc++.h>
using namespace std;
int main()
{

    int v,u,s;
    printf("Enter number of nodes & edges\n");
    cin>>v>>u;

    int x,y;

    vector<int> adj[v];
    printf("Enter all edges");
    for(int i=0;i<u;i++)
    {
        scanf("%d %d",&x,&y);
        adj[x-1].push_back(y-1);
        adj[y-1].push_back(x-1);

    }

    printf("Enter Source Node\n");
    scanf("%d" , &s);
    s--;

    int level[v] = {0};
    int visited[v] = {0};
    queue <int> q;
    q.push(s);
    level[s] = 0;
    visited[s] = 1;
    for(int i=0;i<v;i++)
    {
        cout<<i+1<<" "<<level[i]<<endl;
    }
    while( !q.empty())
    {
        int p = q.front();
        q.pop();

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
    for(int i=0;i<v;i++)
    {
        cout<<i+1<<" "<<level[i]<<endl;
    }
    cout<<"Succesfully performed bfs\n";
    return 0;
}
