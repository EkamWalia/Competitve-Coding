#include<bits/stdc++.h>
using namespace std;

string reverse(string s, int x) {


	for(int i=0;i<x/2;i++) {
		char temp = s[i];
		s[i] = s[x-i-1];
		s[x-i-1] = temp;
	}

	return s;
}

int main() {

	int n,k;
	cin>>n>>k;

	string s;
	cin>>s;

	//s = reverse(s,n);
	int a[26]={0};

	for(int i=0;i<n;i++) {
		int temp = s[i]-'a';
		a[temp]++;
	}

	for(int i=0;i<k;i++) {

		for(int j=0;j<26;j++) {
			if(a[j] != 0){
				a[j]--;
				break;
			}
		}
	}

	string out="";
	
	for(int i=n-1;i>-1;i--) {
		int temp = s[i]-'a';

		if(a[temp] !=0) {
			out += s[i];l
			a[temp]--;
		}
	}

	for(int i=n-k;i>-1;i--) cout<<out[i];
	if(out != "")
		cout<<endl;
	

/*	for(int i=0;i<n;i++) {
		int temp = s[i]-'a';

		if(a[temp] !=0 ) {
			out += s[i];
			a[temp]--;
		}
	}	
	out = reverse(out, n-k);
	cout<<out<<endl;*/
	return 0;
}