#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--) {

		int n,k;
		cin>>n>>k;

		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		int sack[n][k+1];

		for(int i=0;i<n;i++)
			sack[i][0] = 0;

		for(int i=1;i<k+1;i++) {
			if(i%a[0] == 0)
				sack[0][i] = i;
			else
				sack[0][i] = sack[0][i-1];
		}

		for(int i=1;i<n;i++) {
			for(int j=1;j<k+1;j++) {
				if((sack[i-1][j] == j) || (a[i]>j))
					sack[i][j] = sack[i-1][j];
				else if(j % a[i] == 0)
					sack[i][j] = j;
				else
					sack[i][j] = max(sack[i-1][j], a[i] + sack[i][j-a[i]]);
			}
		}
    	/*
    	cout<<"    |   ";
    	for(int i=0;i<k+1;i++)
    		cout<<i<<"  ";

    	cout<<endl;
		for(int i=0;i<n;i++){
 			cout<<a[i]<<"   |   ";           
			for(int j=0;j<k+1;j++)
				cout<<sack[i][j]<<"  ";
			cout<<endl;
		}
		*/
		cout<<sack[n-1][k]<<endl;
	}

	return 0;
}