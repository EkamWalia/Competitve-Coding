#include<bits/stdc++.h>
using namespace std;

#define test int t; cin>>t; while(t--) 
#define ll long long int

#define rep(i,n) for(int i=0;i<n;i++)
#define 

#define vi vector<int> 
#define vpi vector<pair<int, int> >
#define pb push_back
#define mp make_pair

int root(int dsu[], int a) {
	while(dsu[a] != a)
		a = dsu[a];

	return a;
}

int main() {

	
	return 0;
}