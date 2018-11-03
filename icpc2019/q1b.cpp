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
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a, a+n);

		if(n < 2) {
			cout<<n<<endl;
			continue;
		}
		else if(n < 3) {
			int temp = a[0] - k;
			a[0] = k;
			a[1] -= temp;
		} else {

			int ik = -1;
			for(int i=0;i<n;i++) {
				if(a[i] > k) {
					ik = i;
					break;
				}
			}

			if(ik > -1 && ik < n-1) {
				while(a[n-3] > k) {

					int temp = a[n-3] - k;
					a[n-3] = k;
					a[n-2] -= temp;

					sort(a, a+n);
				}

				if(a[n-2] > k) {
					int temp = a[n-2] - k;
					a[n-2] = k;
					a[n-1] -= temp;
				}
			}
		}

		int sum = 0;
		for(int i=0;i<n;i++) {
			sum += a[i];
		}
		cout<<sum<<endl;
	}

	return 0;
}