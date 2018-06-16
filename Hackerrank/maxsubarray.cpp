#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int sa=0,ss=0;
		int a[n];
		int mini = INT_MIN;

		for(int i=0;i<n;i++) {
			cin>>a[i];
			if(a[i] > 0) ss += a[i];
			if(a[i] <= 0) mini = max(mini, a[i]);
		}

		int curr_max=a[0];
		sa = a[0];

		for(int i=1;i<n;i++) {
			curr_max = max(a[i], curr_max + a[i]);
			sa = max(curr_max, sa);
		}

		if(ss == 0) ss = mini;

		cout<<sa<<" "<<ss<<endl;
 	}

	return 0;
}