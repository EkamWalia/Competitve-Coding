#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;

	int pillars[n];

	int min_sum=0,sum = 0;
	int ind = 0;

	for(int i=0;i<n;i++) {
		cin>>pillars[i];

		if(i<k) sum += pillars[i];
	}

	min_sum = sum;


	int temp = pillars[0];
	for(int i=1;i<n-k+1;i++) {
		sum -= temp;
		sum += pillars[i+k-1];

		if(sum < min_sum) {
			min_sum = sum;
			ind = i;
		}

		temp = pillars[i];
	}


	cout<<ind+1<<endl;

	return 0;
}