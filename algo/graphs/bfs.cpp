// BFS on unweighted, undirected graph
#include<bits/stdc++.h>
using namespace std;

int bfs(vector<int> adj[], bool visited[], int level[], int s) {

	queue<int> q;

	q.push(s);

	while(!q.empty()) {
		int p = q.front();
		q.pop();

		if(visited[p] == false) {
			for(int i=0,n = adj[p].size(); i<n; i++) {
				visited[adj[p][i]] = true;
				level[adj[p][i]] = level[p] + 1;
				q.push(adj[p][i]);
			}
		}
	}
}


int main() {
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];

	for(int i=0;i<m;i++) {
		int v1,v2;

		cin>>v2>>v2;
		adj[v1].push_back(v2);
		adj[v2].push_back(v1);
	}


	int s;
	cin>>s;

	bool visited[n+1] = {false};
	int level[n+1] = {0};

	level[s] = 0;

	bfs(adj,visited,level,s);

	for(int i=0;i<n+1;i++)
		cout<<i<<"  "<<level[i]<<endl;

	return 0;
}