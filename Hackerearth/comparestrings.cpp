#include<bits/stdc++.h>
using namespace std;

int first;
int same;

int isGTE(string s1, string s2,int n, int i) {

	if(i > first) {
		return s1[first] > s2[first];
	} else if (i < first) {
		if(s1[i] != s2[2]) {
			first = i;
		}

		return s1[first] > s2[first];
	} else {

	//	cout<<i<<"  "<<first<<endl;
		if(s1[first] == s2[first]) {
	//		cout<<s1[first]<<"  "<<s2[first]<<endl;
			
			for(int j=i;j<n;j++) {
	//			cout<<s1[j]<<"  "<<s2[j]<<endl;
				if(s1[j] != s2[j]){
					first = j;
					break;
				}
			}
		}

		return s1[first] > s2[first];
	}

}

int main() {
	int n,q;
	cin>>n>>q;

	string s1,s2;
	cin>>s1;
	cin>>s2;

	for(int i=0;i<n;i++) {
		if(s1[i] != s2[i]){
			first = i;
			same = 0;
			break;
		} else {
			same = 1;
		}
	}

	//cout<<"First "<<first<<endl;
	while(q--) {
		int i;
		cin>>i;

		i--;

		s2[i] = '1';
		
		int check = isGTE(s1,s2,n, i);
		cout<<(!check ? "YES\n" : "NO\n");
	}

	return 0;
}