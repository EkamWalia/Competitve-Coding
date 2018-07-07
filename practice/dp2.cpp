#include<bits/stdc++.h>
using namespace std;

int main() {

	int n,m;
	cin>>n>>m;

	int set[n];
	for(int i=0;i<n;i++) cin>>set[i];

	int subsets[n][m+1];

	for(int i=0;i<n;i++) subsets[i][0] = 1;

	for(int j=1;j<m+1;j++) {
		if(set[0] == j) subsets[0][j] = 1;
		else subsets[0][j] = 0;
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<m+1;j++) {
			if(set[i] > j) {
				subsets[i][j] = subsets[i-1][j];
			} else {
				subsets[i][j] = subsets[i-1][j] || subsets[i-1][j-set[i]];
			}
		}
	}

	for(int i=0;i<n;i++) {
		cout<<set[i]<<"    ";
		for(int j=0;j<m+1;j++)
			cout<<subsets[i][j]<<"  ";

		cout<<endl;
	}
	cout<<subsets[n-1][m]<<endl;
	return 0;
}