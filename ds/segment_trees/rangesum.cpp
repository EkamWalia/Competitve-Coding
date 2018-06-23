#include<bits/stdc++.h>
using namespace std;

void build(int a[], int tree[],int node, int start, int end) {
		
	if(start == end) 
		tree[node]	= a[start];

	else {

		int mid = ( start + end )/2;

		build(a,tree,2*node+1, start, mid);
		build(a,tree,2*node+2,mid+1, end);

		tree[node] = tree[2*node+1] + tree[2*node+2];
	}
}


void update(int a[], int tree[], int node, int start, int end, int ind, int val) {
	if(start == end) {
		a[ind] = +val;
		tree[node] += val;
	} else {
		int mid = start + (end-start)/2;

		if(start<=ind && ind<=mid)
		update(a,tree,2*node+1,start,mid,ind,val);
		else
		update(a,tree,2*node+2,mid+1,end,ind,val);

		tree[node] = tree[2*node+1] + tree[2*node+2];
	}
}


int query(int a[], int tree[], int node, int start, int end, int l, int r) {

	if(start > r || end < l) {

		return 0;
	} else if(start >=l && r >= end) {

		return tree[node];
	}

	int mid = (end+start)/2;

	int s1,s2;

	s1 = query(a,tree,2*node+1, start, mid, l,r);
	s2 = query(a,tree,2*node+2, mid+1, end, l,r);

	return s1+s2;
} 

int main() {

	// IO
	int n;
	cin>>n;

 

    cout<<max_size<<endl;

	int a[n], tree[max_size];

	for(int i=0;i<n;i++) cin>>a[i];
	
	// QUERY
	build(a,tree,0,0,n-1);

	// Query
	int l,r;
	cin>>l>>r;

	for(int i=0;i<max_size;i++) cout<<i<<"  "<<tree[i]<<endl;
	
	cout<<query(a,tree,0,0,n-1,l,r)<<endl;
	
	//Update
	int ind, val;
	cin>>ind>> val;

	update(a,tree,0,0,n-1,ind,val);
		for(int i=0;i<max_size;i++) cout<<i<<"  "<<tree[i]<<endl;

	cout<<"Enter lr";

	cin>>l>>r;

	cout<<query(a,tree,0,0,n-1,l,r)<<endl;

	return 0;
}