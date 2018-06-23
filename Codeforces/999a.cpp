#include<bits/stdc++.h>
using namespace std;

int main() {

	int n,k, count=0;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int i=0;
	while(a[i] <= k && i < n)  {
		i++;
		count++;
	}

	if(i!=n) {
		i = n-1;
		while(a[i] <= k && i>-1) {
			i--;
			count++;
		}
	}

	cout<<count<<endl;
	return 0;
}