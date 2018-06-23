#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int n, int ele) {
	int start = 0;
	int	end = n-1;

	while(start<=end) {
		int mid = start + (end-start)/2;

		if(a[mid] == ele) {
			return mid;
		} else if(a[mid] > ele) {
			end = mid-1;
		} else {
			start = mid + 1; 
		}
	}

	return -1;

}

int main() {

	int a[] = {1,2,3,4,5,6,7};
	int n = 7;

	cout<<binarySearch(a,n,1)<<endl;
	cout<<binarySearch(a,n,2)<<endl;
	cout<<binarySearch(a,n,3)<<endl;
	cout<<binarySearch(a,n,4)<<endl;
	cout<<binarySearch(a,n,5)<<endl;
	cout<<binarySearch(a,n,6)<<endl;
	cout<<binarySearch(a,n,7)<<endl;
	cout<<binarySearch(a,n,9)<<endl;
	return 0;
}