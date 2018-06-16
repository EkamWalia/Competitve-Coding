#include<bits/stdc++.h>
using namespace std;

int recSubsetSum(int arr[], int n, int sum) {
	if(sum == 0) 
		return 1;
	if(n == 0)
		return 0;

	if(arr[n-1] > sum)
		return recSubsetSum(arr,n-1,sum);

	return recSubsetSum(arr, n-1, sum) || recSubsetSum(arr, n-1, sum-arr[n-1]);
}

int dpSubsetSum(int arr[], int n, int sum) {
	bool dp[n+1][sum+1];

	
	for(int i=0;i<=n;i++)
		dp[i][0] = true;

	for(int  j=1;j<=sum;j++)
		dp[0][j] = false;

	
	for(int i=1;i<n+1;i++) {
		
		for(int j=1;j<sum+1;j++) {
			cout<<i<<"   "<<j<<"   ";	
			if(arr[i-1] > j)
				dp[i][j] = dp[i-1][j];
			
			else
				dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
			cout<<dp[i][j]<<endl;
		}
	}

	return dp[n][sum];
}

int main() {
	int n, s;
	cin>>n>>s;

	int arr[n];

	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<dpSubsetSum(arr,n,s)<<endl;

	return 0;
}