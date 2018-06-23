#include<bits/stdc++.h>
using namespace std;

int iskDominant(string s, int n, int k) {

	int count[26]={0};
	//cout<<"in kdominant\n";

	for(int i=0;i<(n-k+1); i++) {
	//	cout<<"vnebe "<<i<<endl;
		for(int j=0;j<k;j++) {

			//cout<<i<<"  "<<s[i+j]<<endl;
			int temp = s[i+j] - 'a';

			if(count[temp] < i+1) {

				count[temp]++;
	//			cout<<"Inctementing\n";
			}
		}
	}

	//cout<<"Printing array\n";

	for(int i=0;i<26;i++) {
	//	cout<<i<<" "<<count[i]<<endl;
		if(count[i] == (n-k+1)) {
	//		cout<<"Match found "<<(char)('a' + i)<<endl;
			return 1;
		}
	}

	
	return 0;
}
	
int binarySearchFirstTrue(string s) {
	int n = s.length();

	int start=0, end=n, mid;

	while(start<end) {

		mid = start + (end-start)/2;
	//	cout<<"Next Iteration "<<start<<"  "<<mid<<" "<<end<<endl;

		if(iskDominant(s,n,mid)) {
			end = mid;
		} else
			start = mid + 1;
	}

	return start;
}

int main() {
	string s;
	cin>>s;

	cout<<binarySearchFirstTrue(s)<<endl;
}