/*
 * An example to demonstrate usage
 * of binary search on monotonic
 * functions.
 *
 * Calculate the floor(sqrt(ele) for
 * a given number.
 */

#include<bits/stdc++.h>
using namespace std;


int binarySearchLastTrue(int n) {

	int start = 0, end = n, mid;
	while(start < end) {
		mid = start + (end-start+1)/2;

		if(mid*mid <= n)
			start = mid;
		else 
			end = mid - 1;
	}

	return start;
}

int main() {
	int n = 121;

	cout<<"floor(sqrt) is "<<binarySearchLastTrue(n)<<endl;

	return 0;

}