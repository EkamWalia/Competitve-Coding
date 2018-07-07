#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;

	int coins[n];
	for(int i=0;i<n;i++) cin>>coins[i];

	int sum = 0;

	int change[m+1];
	change[0]= 0;

	for(int i=1;i<m+1;i++) {

		change[i] = INT_MAX;
		for(int j=0;j<n;j++) {
			if(i-coins[j] >= 0)
				change[i] = min(change[i], 1+change[i-coins[j]]);
		}

		if(change[j] == INT_MAX) change[j] = 0;
	}

	cout<<change[m]<<endl;

	return 0;
}