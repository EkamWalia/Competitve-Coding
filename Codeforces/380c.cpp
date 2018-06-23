#include<iostream>
using namespace std;
const int N = 1e6 + 10;
string s;

struct Node {
	int t;
	int o;
	int c;
}tree[4*N];

void build(int node, int start, int end) {
	if(start == end) {

		//cout<<"Setting node "<<node<<" bracket is "<<s[start]<<endl;
		tree[node].t = 0;
		if(s[start] == '('){
			tree[node].o = 1;
			tree[node].c = 0; 
		} else {
			tree[node].o = 0;
			tree[node].c = 1;
		}

		return;
	} 

	int mid = start + (end-start)/2;

	build(2*node+1,start, mid);
	build(2*node+2,mid+1,end);

	int mini = min(tree[2*node+1].o, tree[2*node+2].c);
	tree[node].t = tree[2*node+1].t + tree[2*node+2].t + 2*mini;

	tree[node].o = tree[2*node+2].o + (tree[2*node+1].o - mini);
	tree[node].c = tree[2*node+1].c + (tree[2*node+2].c - mini);

	return;
}

Node query(int node, int start, int end, int l, int r) {
	if(start > r || l > end) {
		Node temp;
		temp.t = temp.c = temp.o = 0;
		return temp;
	} 

	else if(l <= start && end <= r) 
		return tree[node];

	int mid = start + (end-start)/2;
	Node r1 = query(2*node+1,start, mid, l, r);
	Node r2 = query(2*node+2, mid+1, end, l, r);

	Node temp;
		
	int mini = min(r1.o, r2.c);
	
	temp.t = r1.t + r2.t + 2*mini;
	temp.o = r2.o + (r1.o - mini);
	temp.c = r1.c + (r2.c - mini);	

	return temp;
}

int main() {
	

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin>>s;
	int n = s.size();


	build(0,0,n-1);
/*	for(int i=0;i<t_size;i++) {
		cout<<i<<"  "<<tree[i].t<<"  "<<tree[i].o<<"  "<<tree[i].c<<endl;
	}
*/

	int m;
	cin>>m;

	while(m--) {
		int l,r;
		cin>>l>>r;
		l--;r--;

		Node res = query(0,0,n-1,l,r);
		cout<<res.t<<endl;
	}

	return 0;
}