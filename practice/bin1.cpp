#include<bits/stdc++.h>
using namespace std;

int binSearch(int a[], int n, int ele) {
	int start= 0, end = n-1;

	while(start<=end) {
		int mid = (start+ end)/2;

		if(a[mid] == ele)
			return mid;
		if(a[mid] < ele) 
			start = mid + 1;
		if(a[mid] > ele)
			end = mid-1;
	}

	return -1;

}

int binSearchLast(int a[], int n, int ele) {
	int start = 0, end = n-1;

	while(low)
}

int main() {
	int a[12] = {1,2,3,4,4,4,5,6,7, 10, 11, 13};
	int n = 12;

	int ind = binSearch(a, n, 4);
	cout<<ind<<endl;
}