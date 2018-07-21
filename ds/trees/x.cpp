#include<bits/stdc++.h>
using namespace std;

int main() {
	map<int, vector<int> > m;

	vector<int> temp;

	temp.push_back(100);
	temp.push_back(200);
	temp.push_back(300);

	m.insert(make_pair(1, temp));
	m.insert(make_pair(2, [1,2,3]));

	cout<<m[1][0]<<endl;
	cout<<m[1][2]<<endl;
}