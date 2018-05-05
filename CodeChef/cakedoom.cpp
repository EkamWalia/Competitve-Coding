#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        string s;
        int k;
        cin>>k;
        cin>>s;
        int flag=0,n = s.length();

        if(s[0] == s[n-1]) {
            cout<<"NO\n";
            continue;
        }

        for(int i=0;i<n-1;i++){
            if(s[i] == '?') {
                int j=0;
                for(;j<k;j++) {
                    if((j != s[i-1]-'0') && (j != s[i+1]-'0')) {
                        s[i] = j + '0';
                        break;
                    }
                }
            } else if(s[i] == s[i+1]) {
                flag = 1;
                break;
            }
        }

        if(flag) {
            cout<<"NO\n";
            continue;
        }

        cout<<s<<endl;
    }

    return 0;
}
