#include<bits/stdc++.h>
using namespace std;

int bsFirstTrue(int a[], int n, int m) {
	int start = 0, end = n-1, mid;

	while(start < end) {
		mid = start + (end-start+1)/2;

		if(a[mid]<=m) 
			start = mid;
		else
			end = mid-1;
	}

	if(a[start] <= m)
		return start;
	else
		return -1;
}

int main() {

	int n,q;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a, a+n);

	cin>>q;
	while(q--) {

		int m;
		cin>>m;

		int ind = bsFirstTrue(a,n,m);

		if(ind == -1)
			cout<<0<<endl;
		else
			cout<<ind+1<<endl;
	}

	return 0;
}