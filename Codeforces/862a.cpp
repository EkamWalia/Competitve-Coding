#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,x;
	cin>>n>>x;

	int temp,a[101]={0};

	for(int i=0;i<n;i++) {
		cin>>temp;
		a[temp] = 1;
	}

	int mex = 0;

	for(int i=0;i<101;i++) {
		if(a[i] == 0){
			mex = i;
			break;
		}
	}


	if(mex == x) {
		cout<<"0\n";
		return 0;
	}
	
	int ops = (a[x] ? 1 : 0);

	ops += abs(mex - x);
	cout<<ops<<endl;
	return 0;
}