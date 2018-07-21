#include<bits/stdc++.h>
using namespace std;

int binSearchLast(int a[],int n, int m) {
	int start = 0;
	int end = n-1;

	int mid;

	while(start<end) {
		mid = (start + end + 1)/2;

		if(a[mid] <= m) {
			start = mid;
		} else 
			end = mid - 1;
	}

	if(a[start] <= m) {
		return start;
	} else
		return -1;
}

int main() {
	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a + n);

	int t;
	cin>>t;
	
	while(t--) {
		int m;
		cin>>m;

		int ind = binSearchLast(a, n, m);

		cout<<(ind+1)<<endl; 
	}

}