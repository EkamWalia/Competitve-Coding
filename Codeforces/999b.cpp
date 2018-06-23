#include<bits/stdc++.h>
using namespace std;

string s;

void reverse(int x) {


	for(int i=0;i<x/2;i++) {
		char temp = s[i];
		s[i] = s[x-i-1];
		s[x-i-1] = temp;
	}
}

int main() {
	int n;
	cin>>n;

	cin>>s;

	for(int i=1;i<=n;i++) {
		if(n%i == 0) {
			reverse(i);
			//cout<<i<<"  "<<s<<endl;
		}
	}

	cout<<s<<endl;
}