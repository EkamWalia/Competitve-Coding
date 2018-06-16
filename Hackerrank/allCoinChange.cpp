#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m;
	cin>>m>>n;

	int c[n],change[n][m+1];

	for(int i=0;i<n;i++) {
		cin>>c[i];
	}

	for(int i=0;i<n;i++) {
		change[i][0] = 0;
	}

	for(int i=1;i<m+1;i++) {
		if(i%c[0] == 0)
			change[0][i] = 1;
		else
			change[0][i] = 0;
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<m+1;j++) {
			if(j<c[i]) 
				change[i][j] = change[i-1][j];
			else
				change[i][j] = change[i-1][j] + change[i][j-c[i]];

			if(j==c[i])
				change[i][j] += 1;
		}
	}

	//for(int i=0;i<m+1;i++)
	//	cout<<i<<"   ";
	//cout<<endl;

/*
	for(int i=0;i<n;i++) {
		for(int j=0;j<m+1;j++)
			cout<<change[i][j]<<"   ";

		cout<<endl;
	}
*/
	cout<<change[n-1][m]<<endl;
	return 0;
}