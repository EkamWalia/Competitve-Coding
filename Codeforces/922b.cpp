#include<bits/stdc++.h>
using namespace std;

int main() {
	int l,r,x,y;
	cin>>l>>r>>x>>y;

	int upper = min(r,y);
	int lower = max(l,x);

	long count = 0;

	long p = ((long)x)*y;

	for(int i=lower;i<=upper;i++) {

		if (p%((long)i) == 0 && __gcd(i,(int)(p/((long)i))) == x){
				count += 1;
		}
	}


	cout<<count<<endl;
	return 0;
}
