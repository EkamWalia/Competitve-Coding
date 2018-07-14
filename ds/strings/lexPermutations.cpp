#include <bits/stdc++.h>
using namespace std;

void allPermutations(string s, int l, int r) {
    
    sort(s.begin(), s.end());
    
    cout<<s<<" ";
    
    while(next_permutation(s.begin(), s.end())) {
        cout<<s<<" ";
    }
    
    return ;
    
}
int main() {
	
	int t;
	cin>>t;
	
	while(t--) {
	    string s;
	    cin>>s;
	    
	    int n = s.length();
	    
	    allPermutations(s,0,n-1);
	    cout<<endl;
	}
	
	return 0;
}