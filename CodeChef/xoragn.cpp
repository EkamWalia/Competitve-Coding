#include<bits/stdc++.h>
using namespace std;

#define tcs int t; cin>>t; while(t--) 
#define ll long long int

#define rep for(int i=0;i<n;i++)
#define vi vector<int> 
#define vpi vector<pair<int, int> >
#define pb push_back
#define mp make_pair


int main() {

	tcs {
		int n;
		cin>>n;

		ll a[n];

		rep cin>>a[i];

		int x = 0;

		rep {
			x ^= (2*a[i]);
		}

		cout<<x<<endl;

	}	

	return 0;
}