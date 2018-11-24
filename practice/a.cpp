#include<bits/stdc++.h>
using namespace std;

int minSteps(int n, int si, int sj, int ei, int ej) {
	int dx[] = {2, 2, -2, -2, 1, -1, 1, -1};
	int dy[] = {1, -1, 1, -1, 2, 2, -2, -2};
	queue<pair<int, int> > q;

	int a[n][n] = {0};
	q.push(make_pair(si, sj));
	a[si][sj] = 1;

	while(!q.empty()) {
		pair<int, int> node = q.front();
		q.pop();

		if (node.first== ei && node.second == ej) {
			break;
		}		
		cout<<"Popped Node "<<node.first<<" "<<node.second<<endl;
		for(int i=0;i<8;i++) {
			int x = node.first + dx[i];
			int y = node.second + dy[i];

			if((x > -1 && x < n) && (y > -1 && y < n) && a[x][y] == 0) {
				cout<<"Pushed Node "<<x<<" "<<y<<endl;
				a[x][y] = a[node.first][node.second] + 1;
				cout<<"Level is "<<a[x][y]<<endl;
				q.push(make_pair(x, y));
			}
		} 
	}

	return a[ei][ej] - 1;
}

int main() {
	int n;
	cin>>n;

	int si, sj;
	int ei, ej;
	cin>>si>>sj;
	cin>>ei>>ej;

	int mini = minSteps(n, si, sj, ei, ej);
	cout<<mini<<endl;
}