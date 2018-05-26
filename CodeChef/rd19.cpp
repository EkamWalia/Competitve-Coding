#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {

		int n;
		cin>>n;

		int c = 0, a[n];


		for(int i=0;i<n;i++) {
			cin>>a[i];	
		}

		int f = 0;
		int gcd = a[0];
		for(int i=1;i<n;i++) gcd = __gcd(gcd, a[i]);


		if(gcd == 1) cout<<"0\n";
		else cout<<"-1\n";
	}

	return 0;
}
