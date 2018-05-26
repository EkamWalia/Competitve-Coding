#include<bits/stdc++.h>
using namespace std;

#define test int t; cin>>t; while(t--) 
#define ll long long int

#define rep(i,n) for(int i=0;i<n;i++)

#define vi vector<int> 
#define vpi vector<pair<int, int> >
#define pb push_back
#define mp make_pair


int findRoot(int dsu[], int a) {
	while(dsu[a] != a) 
		a = dsu[a];

	return a;
}

void wunion(int dsu[], int size[], int root[], int a, int b) {
	int ra = findRoot(dsu, a);
	int rb = findRoot(dsu, b);

	if(size[ra] >= size[rb]) {
		dsu[rb] = ra;
		size[ra] += size[rb];
		root[rb] = 0;	
	} else {
		dsu[ra] = rb;
		size[rb] += size[ra];
		root[ra] = 0;
	}
}

int main() {

	int n;
	cin>>n;

	int dsu[n+1], size[n+1], root[n+1];

	for(int i=1;i<2*n+1; i++) {
		dsu[i] = i;
		size[i] = 1;
		root[i] = 1;
	}
		
	int m;
	cin>>m;

	for(int i=0;i<m;i++) {
		int a, b;
		cin>>a>>b;

		wunion(dsu,size,root,a,b);
	}

	cin>>m;

	for(int i=0;i<m;i++) {
		int a,b;
		cin>>a>>b;

		int ra = findRoot(dsu,a);
		int rb = =findRoot(dsu,b);

		if(ra == rb) {
			root[ra] = 0;
		}
	}

	int maxi=-1;
	for(int i=1;i<2*n+1;i++) {
		if(root[i]) {
			    maxi = max(maxi, size[i]);
		}
	}

	cout<<maxi<<endl;

	return 0;
}