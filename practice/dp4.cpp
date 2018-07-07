#include<bits/stdc++.h>
using namespace std;

int main() {

	string s,t;
	cin>>s>>t;

	int n = s.length();
	int m = t.length();

	int lcs[n][m]={0};

	for(int i=0;i<n;i++) {
		if(s[i] == t[0]) lcs[i][0] = 1;
		else lcs[i][0] = 0;
	}

	for(int j=0;j<n;j++) {
		if(s[0] == t[j]) lcs[0][j] = 1;
		else lcs[0][j] = 0;
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<m;j++) {
		
			if(s[i] == t[j]) {
				lcs[i][j] = 1 + lcs[i-1][j-1];  
			} else {
				lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
	}

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cout<<lcs[i][j]<<"  ";
		}

		cout<<endl;
	}

	return 0;
}