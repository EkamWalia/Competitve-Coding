#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;

	int a[n][m];
	int v[n][m]={0};

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {

			cin>>a[i][j];

			if(a[i][j]) v[i][j] = 1;
		} 
	}

	int sn,sm;
	cin>>sn>>sm;

	




	return 0;
}