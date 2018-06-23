#include<bits/stdc++.h>
using namespace std;

void build(int a[], int tree[], int node, int start, int end) {
	if(start == end) {
		tree[node] = a[start];
		return;
	}

	int mid = start + (end-start)/2;
	build(a,tree,2*node+1,start, mid);
	build(a,tree,2*node+2,mid+1,end);

	tree[node] = min(tree[2*node+1],tree[2*node+1]);

	return;
}

void rangeUpdate(int a[], int tree[], int lazy[], int node, int start, int end, int l, int r, int val) {
	if(lazy[node] != 0) {

		tree[node] += lazy[node];
		if(start != end) {
			lazy[2*node+1] += lazy[node];
			lazy[2*node+2] += lazy[node];
		}

		lazy[node] = 0;
	}

	if(l > end || start > r) 
		return;

	if(l <= start && end < = r) {
		tree[node] += val;

		if(start != end) {
			lazy[2*node+1] += val;
			lazy[2*node+2] += val;
		}

		return ;
	}

	int mid = start + (end-start)/2;
	rangeUpdate(a,tree,lazy,2*node+1,start, mid,l,r,val);
	rangeUpdate(a,tree,lazy,2*node+2,mid+1, end,l,r,val);

	tree[node] = min(tree[2*node+1], tree[2*node+1]);

}

int queryRange(int a[],int tree[], int lazy[], int node, int start, int end, int l, int r) {
	if(start > r || end < l)
		return 0;
	if(lazy[node] != 0) {
		tree[node] += lazy[node];

		if(start != end) {
			lazy[2*node+1] = lazy[node];
			lazy[2*node+2] = lazy[node]; 
		}

		lazy[node] = 0;
	}

	if(l<= start && end <= r) 
		return tree[node];

	int mid = start + (end-start)/2;
	int s1 = queryRange(a,tree,lazy,2*node+1,start,mid,l,r);
	int s2 = queryRange(a,tree,lazy,2*node+2,mid+1,end,l,r);

	return min(s1,s2);
}

int main() {

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int x = (int) ceil(log2(n));
	int t_size = 2*pow(2,x) -1;

	int tree[t_size];
	int lazy[t_size]={0};

	build(a,tree,0,0,n-1);

	int m;
	cin>>m;

	while(m--) {

		int op;
		cin>>op;
		int l,r;

		cin>>l>>r;

		if(op == 1) {
			
			int val;
			cin>>val;
			rangeUpdate(a,tree,lazy,0,0,n-1,l,r,val);
			cout<<"updated\n";

		} else {
			
			int res = queryRange(a,tree,lazy,0,0,n-1,l,r);
			cout<<res<<endl;

		}

	}

	return 0;
}