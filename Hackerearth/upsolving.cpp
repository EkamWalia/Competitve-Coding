#include<bits/stdc++.h>
using namespace std;


long binSearchFirst(long sum, int m) {
	long start = 0;
	long end = LONG_MAX;
	long mid;

	while(start<end) {
		mid = start + (end-start)/2;

		cout<<"Start "<<start<<"End "<<end<<" mid "<<mid<<endl;
		if(mid*(long)m >= sum)
			end = mid;
		else
			start = mid+1;
	}

	return start;
}
int main() {
	int n, m;
	cin>>n>>m;

	long sum=0, temp;
	for(int i=0;i<n;i++) {
		cin>>temp;
		sum += temp;
	}


 	long t = binSearchFirst(sum, m);

 	cout<<t<<endl; 
}