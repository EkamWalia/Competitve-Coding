#include<bits/stdc++.h>
using namespace std;
int num = 6;

int checkCond(int x) {
	return x >= num;
}

int binSearchLastTrue(int a[], int n, int ele) {
	int start, end, mid;
	start = 0, end = n-1;
	while(start < end) {
		mid = start + (end-start+1)/2;

		if(checkCond(a[mid]))
			end = mid - 1;
		else
			start = mid;
	}

	if(!checkCond(a[start]))
		return a[start];
	return -1;
}
int main() {

	// find first number greater than equal to
	int a[] = {1,2,3,4,6,7,8,9,10};
	int n = 9;

	int flag = binSearchLastTrue(a, n, num);
	cout<<flag;
}