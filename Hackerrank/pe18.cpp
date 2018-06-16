#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	
	while(t--) {

		int n;
		cin>>n;


		int a[n][n], dp[n][n];

		for(int i=0;i<n;i++) {
			for(int j=0;j<i+1;j++) 
				cin>>a[i][j];
		}

		for(int i=1;i<n;i++) {
			dp[i][0] = a[i][0] + dp[i-1][0];
		}

		for(int i=1;i<n;i++) {
			for(int j=1;j<i+1;j++) 
				dp[i][j] = a[i][j] + max(dp[i-1][j], dp[i-1][j-1]);
		}

		int maxi = -1;

		for(int j=0;j<n;j++)
			maxi = max(maxi, dp[n-1][i]);
		
		cout<<maxi<<endl;
	}

	return 0;
}