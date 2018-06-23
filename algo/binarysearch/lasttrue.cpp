/*
 * Binary Search Algorithm to return 
 * the index of the last value that
 * satisfies some condition. Here
 * the condition is that element should
 * be lte ele.
 */ 

#include<bits/stdc++.h>
using namespace std;

int binarySearchLastTrue(int a[], int n, int ele) {
	int start = 0, end = n-1;
	int mid;

	while(start < end) {	
		mid = start + (end-start + 1)/2;

		cout<<"Start: "<<start<<" and End: "<<end<<endl;
		cout<<"Mid: "<<mid<<" A[mid]: "<<a[mid]<<endl<<endl; 
		if(a[mid] <= ele)
			start = mid;
		else 
			end = mid-1;
	}

	// If the array contains all falses
	// after exiting the loop, low will
	// be the last index. SO we check if 
	// the last indice satisfies the condition

	if(a[start] <= ele) 
		return start;
	else
		return -1;
}

int main() {

	int a[] = {2,7,13,19,24,39,47,51,59,62,79};
	int n = 11;

	int ele = 50;
	
	// Returns 7 because 7 a[7] = 50 is the 
	// last value <= 50 in the given array
	cout<<binarySearchLastTrue(a,n,1)<<endl;
	cout<<binarySearchLastTrue(a,n,2)<<endl;

	return 0;
}