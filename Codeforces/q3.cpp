#include<bits/stdc++.h>
using namespace std;
int main() {

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;

		int a[1005]={0} , b[1005] = {0};
		vector<int> v;

		for(int i=0, temp;i<n;i++) {
			cin>>temp;
			if(temp >=0) {
				if(!a[temp]) {
					v.push_back(temp);
				}
				a[temp] += 1;
			} else {
				if(!b[temp]) {
					v.push_back(temp);
				}
				b[temp] += 1;
			}
		}

		int pairs = 0;
		sort(v.begin(), v.end());
		int avg;

		for(int i=0, x=v.size(); i<x; i++) {
			for(int j=i+1; j<x; j++) {
				avg = (v[i] + v[j]);
				if(avg%2 == 0) {
					avg /= 2;
					if(avg >= 0 && a[avg]) pairs+= a[v[i]] * ;
					else if(avg < 0 && b[avg]) pairs++;
				}
			}
		}

		printf("%d\n", pairs);
	}
	return 0;
}
