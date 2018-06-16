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

string dpLCS(string a, string b) {
	int n = a.length();
	int m = b.length();

	int dp[n+1][m+1];

	
	for(int i=0;i<=n;i++)
		dp[i][0] = 0;

	for(int  j=1;j<=m;j++)
		dp[0][j] = 0;

	
	for(int i=1;i<n+1;i++) {
		
		for(int j=1;j<m+1;j++) {

			if(a[i] == b[j])
				dp[i][j] = dp[i-1][j-1] + 1;
			
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			cout<<dp[i][j]<<"  ";
		}

		cout<<endl;
	}

	int i=n-1,j=m-1;

	string c = "";
	
	while(i>=0 && j>=0) {

		cout<<i<<"  "<<j<<endl;
		if(a[i] == b[j]) {
			c += a[i];
			i--;j--;
		} else if(dp[i][j-1] < dp[i-1][j]) {
			i--;
		} else {
			j--;
		}
	}

	return c;
}

int main() {
	string a,b;
	cin>>a>>b;

	cout<<dpLCS(a, b)<<endl;

	return 0;
}