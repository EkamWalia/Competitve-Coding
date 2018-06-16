#include<bits/stdc++.h>
using namespace std;

int main() {

	int m;
	cin>>m;

	int n;
	cin>>n;

	vector<pair<int,int> > items;
	for(int i=0;i<n;i++) {
		int a,b;
		cin>>a>>b;

		// a -> first -> weight
		// b -> second -> value
		items.push_back(make_pair(a,b));
	}

	int knapsack[n][m+1];

	for(int i=0;i<n;i++) {
		knapsack[i][0] = 0;
	}

	for(int j=1;j<m+1;j++) {
		//cout<<j<<"   "<<items[0].first<<"  "<<items[0].second<<endl;;
		if(j>=items[0].first)
			knapsack[0][j] = items[0].second;
		else 
			knapsack[0][j] = 0;
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<m+1;j++) {
			if(j<items[i].first)
				knapsack[i][j] = knapsack[i-1][j];
			else {
				knapsack[i][j] = max(knapsack[i-1][j], items[i].second + knapsack[i-1][j-items[i].first]);
			}
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<m+1;j++) 
			cout<<knapsack[i][j]<<"  ";
		cout<<endl;
	}
	return 0;
}