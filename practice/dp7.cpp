#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	int n = s.length();

	int lps[n][n]={0};
	
	int interval = 1;

	for(int i=0;i<n;i++) lps[i][i] = 1;

	while(interval < n) {

		for(int i=0;i+interval<n;i++) {
			if(s[i] == s[i+interval]) {
				lps[i][i+interval] = 2 + lps[i+1][i+interval-1]; 
			} else {
				lps[i][i+interval] = max(lps[i+1][i+interval], lps[i][i+interval-1]);
			}

			cout<<i<<"  "<<lps[i][i+interval]<<endl;
		}

		interval++;
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<lps[i][j]<<"  ";
		}

		cout<<endl;
	}

	cout<<lps[0][n-1]<<endl;

	return 0;
}