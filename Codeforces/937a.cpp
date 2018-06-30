#include<bits/stdc++.h>
using namespace std;

int main() {

	int temp,n;
	cin>>n;

	set<int> pts;

	for(int i=0; i<n; i++) {
		cin>>temp;
		if(temp != 0)
			pts.insert(temp);
	}

	int ways = pts.size();
	cout<<ways<<endl;

 	return 0;
}