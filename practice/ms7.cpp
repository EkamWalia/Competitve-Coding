#include<bits/stdc++.h>
using namespace std;


int binSearch(int a[], int x, int start, int end) {

	int mid;

	while(start <= end) {
		mid = (start + end)/2;

		if(a[mid] == x) 
			return mid;
		if(a[mid] < x) 
			start = mid + 1;
		if(a[mid] > x)
			end = mid-1;
	}

	return -1;

}
int main() {

	int INT = 5; // could be 10^5

	int start=0, end = 4;

	int a[101]={0};
	for(int i=0;i<101;i++)
		a[i] = i; 

	int x;
	cin>>x;

	while(a[end] < x) {
		int temp = end;
		end = start + INT;
		start = temp;
	}

	int index = binSearch(a, x, start, end);

	cout<<index<<endl;
}