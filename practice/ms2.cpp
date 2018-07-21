#include<bits/stdc++.h>
using namespace std;

void printValid(string s, int max, int o, int c) {
	if(c == max) {
		cout<<s<<endl;
		return ;
	}

	if(o < max) {
		string new_open= s + "(";
		int new_o = o+1;
		printValid(new_open, max, new_o, c);
	}

	if(o > c) {
		string new_close = s + ")";
		printValid(new_close, max, o, c+1);
	}

	return ;

}

int main() {

	int n;
	cin>>n;

	if(n%2 == 1) {
		cout<<"Not Possible\n";
		return 0;
	}

	int mo = n/2;

	printValid("", mo, 0, 0);

	return 0;
}