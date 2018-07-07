#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;

	int seq[n], lis[n];
	for(int i=0;i<n;i++){
		cin>>seq[i];	
	} 

	lis[0] = 1;
	
	for(int i=1;i<n;i++) {
		lis[i] = 0;

		for(int j=0;j<i;j++) {
			if(seq[i] >= seq[j])
				lis[i] = max(lis[i], lis[j] + 1);

		}
	}

	for(int i=0;i<n;i++) 
		cout<<i<<"  "<<seq[i]<<"  "<<lis[i]<<endl; 

	return 0;
}