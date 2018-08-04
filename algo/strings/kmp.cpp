#include<bits/stdc++.h>
using namespace std;


void  substrmatchKMP(string txt, string pat) {
	int n = txt.length();
	int m = pat.length();

	int lps[m];
	constructKMPPrefix(pat, m, lps);


	return ;
}

void constructKMPPrefix(string pat, int m, int lps[]) {

	lps[0] = 0;

	int i = 0;
	for(int j=1;j<n;j++) {
		if(pat[i] == pat[j]) {
			pat[j] = i+1;
			i = j;
		} else {
			
		}
	}	

	return ;
}

int main() {
	string txt,pat;

	cin>>txt>>pat;

	return 0;
}