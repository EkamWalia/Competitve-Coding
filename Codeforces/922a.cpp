#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	set<int> s;

	for(int i=0;i<n;i++) {
		int temp;
		cin>>temp;
		if(temp!=0)
			s.insert(temp);
	}

	int ans = s.size();

	cout<<ans<<endl;
}