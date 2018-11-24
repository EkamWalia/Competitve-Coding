#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[], int n, int ele) {
	int start, end, mid;
	start = 0, end = n-1;
	while(start <= end) {
		mid = start + (end-start)/2;

		if(a[mid] == ele)
			return 1;
		else if(a[mid] > ele)
			end = mid-1;
		else start = mid + 1;
	}

	return 0;
}
int main() {

	int a[] = {1,2};
	int n = 2;

	int flag = binSearch(a, n, -1);
	cout<<flag;
}