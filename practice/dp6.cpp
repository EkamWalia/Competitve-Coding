#include<bits/stdc++.h>
using namespace std;

int main() {

	int n,m;
	cin>>n>>m;

	int cost[n][m], path[n][m];

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) 
			cin>>cost[i][j];
	}

	path[0][0] = cost[0][0];
	for(int i=0;i<n;i++)
		path[i][0] = cost[i][0] + path[i-1][0];

	for(int j=1;j<m;j++)
		path[0][j] = cost[0][j] + path[0][j-1];

	for(int i=1;i<n;i++) {
		for(int j=1;j<n;j++) {
			path[i][j] = cost[i][j] + min(path[i-1][j], min(path[i-1][j-1],path[i][j-1]));
		}
	} 

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++)
			cout<<path[i][j]<<"  ";
		cout<<endl;
	}
	return 0;
}