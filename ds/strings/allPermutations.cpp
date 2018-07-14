#include <iostream>
using namespace std;

void allPermutations(string s, int l, int r) {
    
    if(l == r) {
        cout<<s<<" ";
        return ;
    }
    
    for(int i=l;i<=r;i++) {
        
        char temp = s[i];
        s[i] = s[l];
        s[l] = temp;
        
        allPermutations(s,l+1,r);
        
        temp = s[i];
        s[i] = s[l];
        s[l] = temp;
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