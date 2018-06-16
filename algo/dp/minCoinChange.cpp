#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;

	int m;
	cin>>m;

	int c[n],change[m+1];

	for(int i=0;i<n;i++) {
		cin>>c[i];
	}

	change[0]=0;
	for(int i=1;i<m+1;i++) {
		change[i] = INT_MAX;
		for(int j=0;j<n;j++) {
			if(c[j]<= i)
				change[i] = min(change[i], 1 + change[i-c[j]]);
		}
	}


	for(int i=0;i<m+1;i++) cout<<i<<"   "<<change[i]<<endl;


	return 0;
}