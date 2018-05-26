#include<bits/stdc++.h>
using namespace std;

#define test int t; cin>>t; while(t--) 
#define ll long long int

#define rep for(int i=0;i<n;i++)

#define vi vector<int> 
#define vpi vector<pair<int, int> >
#define pb push_back
#define mp make_pair


int main() {

	test {
		
		int n, k;
		cin>>n>>k;

		vpi odd, even;
		int a[n];

		rep {
			cin>>a[i];
			
			i%2 ? odd.pb(mp(a[i], i)) : even.pb(mp(a[i], i)); 
		}

		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end());

		int evens = even.size(), odds = odd.size();
		int i=0, j=evens-1;

		/*for(int p=0;p<evens ;p++) {
			cout<<even[p].first<<" "<<even[p].second<<endl;
		}


		for(int p=0;p<odds ;p++) {
			cout<<odd[p].first<<" "<<odd[p].second<<endl;
		}*/


		while(k && (i < odds) && j) {
			if(odd[i].first < even[j].first ) {
				a[odd[i].second] = even[j].first;
				a[even[j].second] = odd[i].first;
				i++;j--;
			} else {
				break;
			}

			k--;
		}

		int p=0, q=0;
		rep {
			if(i%2) q += a[i];
			else p += a[i];
		}

		cout<<(q>p ? "YES\n" : "NO\n" );

	}

	return 0;
}
