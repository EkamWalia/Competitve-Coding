#include<bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;

	int sum = 0;

	for(int i=0, temp;i<n;i++) {
		cin>>temp;
		sum += temp;	
	}
	 
	float log_n = log2(sum);

	cout<<pow(2,ceil(log_n))<<endl;
}