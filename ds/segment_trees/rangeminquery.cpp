#include<bits/stdc++.h>
using namespace std;

void build(int a[], int tree[], int node, int start, int end) {
	if(start == end) {
		tree[node] = a[start];	
		return;
	}

	int mid = start + (end-start)/2;
	build(a,tree,2*node+1,start,mid);
	build(a,tree,2*node+2,mid+1,end);

	tree[node] = min(tree[2*node+1], tree[2*node+2]);
	
	return;
}
	
void update(int a[], int tree[], int node, int start, int end, int pos, int val) {
	if(start == end) {
		a[pos] = val;
		tree[node] = val;
		return;
	}
	
	int mid = start + (end-start)/2;

	if(start<= pos && pos<=mid) 
		update(a,tree,2*node+1,start,mid,pos,val);
	else 
		update(a,tree,2*node+2,mid+1,end,pos,val);

	tree[node] = min(tree[2*node+1],tree[2*node+2]);

	return;
}

int query(int tree[], int node, int start, int end, int l, int r) {

	if(r<start || end<l) 
		return INT_MAX;
	if(l <= start && end <= r) 
		return tree[node];

	int mid = start + (end-start)/2;

	int x = query(tree, node*2+1, start, mid, l, r);
	int y = query(tree, node*2+2, mid+1, end, l, r);

	return min(x,y); 
}

int main() {

	int n,t;
	cin>>n>>t;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	int x = (int)(ceil(log2(n))); 
    	int max_size = 2*(int)pow(2, x) - 1;


	int tree[max_size];

	build(a,tree,0,0,n-1);

	//for(int i=0;i<max_size;i++) cout<<i<<"  "<<tree[i]<<endl;

	//int pos, val;
	//cin>>pos>>val;
	
	//update(a,tree,0,0,n-1,pos,val);
	//for(int i=0;i<max_size;i++) cout<<i<<"  "<<tree[i]<<endl;
	while(t--) {

		char x;
		cin>>x;

		if(x == 'q') {
			int l,r;
			cin>>l>>r;
			l--;r--;
			int min = query(tree,0,0,n-1,l,r);
			cout<<min<<endl;		
		} else {
			int pos,val;
			cin>>pos>>val;
			pos--;
			update(a,tree,0,0,n-1,pos,val);
			//for(int i=0;i<n;i++) cout<<a[i]<<"  ";
			//cout<<"\ndone\n";
		}
	}
	
	return 0;
}