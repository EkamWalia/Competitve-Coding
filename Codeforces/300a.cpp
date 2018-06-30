#include<bits/stdc++.h>
using namespace std;

int main() {

	int temp,n;
	cin>>n;

	vector<int> neg,pos,zero;
	int cp=0,cn=0,cz=0;

	for(int i=0;i<n;i++) {
		cin>>temp;

		if(temp == 0) {
			cz++;
			zero.push_back(temp);
		} else if(temp > 0) {
			cp++;
			pos.push_back(temp);
		} else {
			cn++;
			neg.push_back(temp);
		}
	}


	if(cp == 0) {

		pos.push_back(neg[cn-1]);
		pos.push_back(neg[cn-2]);
		cn -=2;
		cp = 2;
	}

	cout<<cn<<" ";
	for(int i=0;i<cn;i++) {
		cout<<neg[i]<<" ";
	}
	cout<<endl;

	cout<<cp<<" ";
	for(int i=0;i<cp;i++) {
		cout<<pos[i]<<" ";
	}
	cout<<endl;

	cout<<cz<<" ";
	for(int i=0;i<cz;i++) {
		cout<<zero[i]<<" ";
	}
	cout<<endl;
	return 0;
}