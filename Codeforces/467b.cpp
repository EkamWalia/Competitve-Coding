#include<bits/stdc++.h>
using namespace std;

#define test int t; cin>>t; while(t--) 
#define ll long long int

#define rep for(int i=0;i<n;i++) 

#define vi vector<int> 
#define vpi vector<pair<int, int> >
#define pb push_back
#define mp make_pair


int isValid(int a, int b, int k) {
	int n = a^b;
	int c = 0;
	//cout<<a<<"  "<<b<<"  "<<n<<endl;

	while(n!=0) {
		if(n%2) c++;
		n/=2;
	}

	//cout<<c<<endl;
	if(c<=k)
		return 1;

	return 0;
}

int main() {

	int n,m,k;

	//cout<<"Enter n,m,k\n";
	cin>>n>>m>>k;

	int fed;
	int a[m];
	//cout<<"Enter m nums\n";

	for(int i=0;i<m;i++) cin>>a[i];

	//cout<<"Enter fed\n";
	cin>>fed;

	int count=0;

	for(int i=0;i<m;i++) {
		count += isValid(a[i],fed,k);
	}
	
	cout<<count<<endl;
	return 0;
}