#include<bits/stdc++.h>
using namespace std;

int isPossible(long a[], int n, long t, int m) {

	//cout<<"New Iteration----------------------\n";

	int days = 0;
	long sum;
	
	for(int i=0;i<n;) {
		
		days += 1;
		sum = 0;
		//cout<<"isPossible: "<<i<<" "<<days<<endl;

		//cout<<sum<<" "<<a[i]<<" "<<t<<" "<<i<<" "<<n<<endl;
		while(sum + a[i] <= t && i<n) {
			sum += a[i];
			i++;
		}


		if(days > m)
			break;

	}

	if(days <= m)
		return 1;
	
	return 0;
}

long binarySearch(long a[], int n, int m) {

	long start=0 , end=LONG_MAX;
	long mid;

	while(start<end) {
		mid = start + (end-start)/2;
		if(isPossible(a,n,mid,m))
			end = mid;
		else
			start = mid+1;

	}

	return start;
}

int main () {
    int n,m;
    cin>>n>>m;
	
	long a[n];        
    for(int i=0;i<n;i++) {
        cin>>a[i];        
    }
    
    cout<<binarySearch(a,n,m)<<endl;    
    return 0; 
}