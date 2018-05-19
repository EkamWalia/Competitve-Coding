#include<bits/stdc++.h>
using namespace std;
int main() {
	int x, y;
	cin>>x>>y;

	int z = x^y;

	int c = 0;
	
	while(z) {

		if(z%2) c++;

		z /= 2;
	}

	cout<<c<<endl;
	return 0;
}