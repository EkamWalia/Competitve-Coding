#include<bits/stdc++.h>
using namespace std;

void printValidSeq(int n, string s, int open, int close) {
	if(close == n/2) {
		cout<<s<<endl;
		return ;
	}

	if(open > close) {
		s += ')';
		printValidSeq(n, s, open, close + 1);
	} 

	if(open < n/2) {
		s += '(';
		printValidSeq(n, s, open + 1, close);
	}

	return ;

}

int main() {
	int n;
	cin>>n;

	if(n%2)
		cout<<"Not possible\n";
	else
		printValidSeq(n, "", 0, 0);

	return 0;
}