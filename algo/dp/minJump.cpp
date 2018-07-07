#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;

	int arr[n], numJump[n], from[n];

	for(int i=0;i<n;i++) cin>>arr[i];


	numJump[0] = 0;
	from[0] = -1;

	for(int i=1;i<n;i++) {
		numJump[i] = INT_MAX;
		for(int j=0;j<i;j++) {
			if((i-j) > arr[j])
				continue;

			numJump[i] = min(numJump[i], 1 + numJump[j]);
		}
	}

	for(int i=0;i<n;i++) cout<<numJump[i]<<"  ";
		cout<<endl;

	return 0;
}