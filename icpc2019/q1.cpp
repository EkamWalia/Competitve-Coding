// Redgame
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n, k;
		cin>>n>>k;

		int a[n];
		int maxi = -1;
		int sum_main = 0;
		int sum_red = 0;

		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum_main += a[i];
			maxi= max(a[i], maxi);

			if(a[i] > k)
				sum_red += (a[i] - k);
		}

		for(int i=0;i<n;i++) {
			
		}

		sum_red+=sum_red%2;
		cout<<(sum_main - sum_red + maxi - k)<<endl;
	}

	return 0;
}