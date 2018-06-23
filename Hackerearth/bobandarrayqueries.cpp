#include<bits/stdc++.h>
using namespace std;

void update(long tree[], int node, int start, int end, int op, int ind) {
	if(start == end) {
	
		//int ones = countOnes(a[ind]);
//		cout<<"Ones in "<<a[ind]<<"  "<<ones<<endl;
		if(op == 1)
			tree[node] += 1;
		else
			tree[node] = max(tree[node]-1,long(0));

		return;
	}

	int mid = start + (end-start)/2;

	if(start<=ind && ind<=mid)
		update(tree,2*node+1,start,mid,op,ind);
	else 
		update(tree,2*node+2,mid+1,end,op,ind);

	tree[node] = tree[2*node+1] + tree[2*node+2];

	return;
}

long query(long tree[], int node, int start, int end, int l, int r) {
	if(r<start || end<l) 
		return 0;
	else if(l<=start && end<=r)
		return tree[node];

	int mid = start + (end-start)/2;
	long s1 = (long) query(tree,2*node+1,start,mid,l,r);
	long s2 = (long) query(tree,2*node+2,mid+1,end,l,r);

	return s1+s2;
}

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,q;
	cin>>n>>q;

	int x = (int) ceil(log2(n));
	int t_size = 2*(int)pow(2,x)-1;

	long tree[t_size]={0};

	while(q--) {
		int op;
		cin>>op;

		if(op == 1 || op == 2) {
	
			int ind;
			cin>>ind;
			ind--;
			update(tree,0,0,n-1,op,ind);
			//cout<<"updated"<<endl;
	
		} else {
	
			int l,r;
			cin>>l>>r;
			l--;r--;
			long ones = query(tree,0,0,n-1,l,r);
			cout<<ones<<"\n";
		}
	}	
	return 0;
}