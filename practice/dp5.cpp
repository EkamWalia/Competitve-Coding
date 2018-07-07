#include<bits/stdc++.h>
using namespace std;

int main() {

	int n,max_weight;
	cin>>n>>max_weight;

	int values[n], weights[n];

	for(int i=0;i<n;i++) cin>>weights[i]>>values[i];

	int knapsack[n][max_weight+1];

	for(int i=0;i<n;i++) 
		knapsack[i][0] = 0;

	for(int j=1; j<max_weight+1;j++) {
		if(weights[0] > j)
			knapsack[0][j] = 0;
		else
			knapsack[0][j] = values[0]; 
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<max_weight+1;j++) {

			if(weights[i] > j) {
				knapsack[i][j] = knapsack[i-1][j];
			} else {
				knapsack[i][j] = max(knapsack[i-1][j], values[i] + knapsack[i-1][j-weights[i]]);
			}

		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<max_weight+1;j++) {

			cout<<knapsack[i][j]<<"  ";

		}
			cout<<endl;
	}
	cout<<knapsack[n-1][max_weight]<<endl;
	return 0;
}