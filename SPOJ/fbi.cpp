#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	int n = s.length();

	int a[n];

	a[0] = 1;

	for(int i=1;i<n;i++) {
		int temp = 10*(s[i-1]-'0') + (s[i]-'0');
		if(temp > 26) {
			a[i] = a[i-1];
		} else if(i == 1){
			a[i] = 2;
		} else {
			a[i] = a[i-1] + a[i-2];
		}
	}


	for(int i=0;i<n;i++) cout<<i<<"   "<<a[i]<<endl;

	cout<<a[n-1]<<endl;
}