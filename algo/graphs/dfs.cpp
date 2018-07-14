#include<bits/stdc++.h>
using namespace std;

void dfs(int s, int vis[], vector<vector<int> >& v) {

	vis[s] = 1;

	cout<<"DFS from node "<<s<<endl;

	for(int i=0, l = v[s].size(); i<l; i++) {
		cout<<"checking node "<<v[s][i]<<"  "<<vis[v[s][i]]<<endl;
		if(vis[v[s][i]] == 0) {
			dfs(v[s][i],vis,v);
		}
	}

	return;
}

int main() {

	int n,m;
	cout<<"Enter n,m\n";
	cin>>n>>m;

	vector<vector<int> > v(n);

	for(int i=0;i<m;i++) {
		int a,b;
		cout<<"Enter a,b\n";
		cin>>a>>b;

		v[a].push_back(b);
	}

	int vis[n];
	fill(vis, vis+n, 0);

	
	for(int i=0;i<n;i++) {
		if(vis[i] == 0) {
			cout<<"Starting dfs with node "<<i<<endl;
			dfs(i,vis,v);
		} 
	}
	

	for(int i=0;i<n;i++) {
		cout<<i<<"  "<<vis[i]<<endl;
	}


	return 0;
}