#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        long long int n1,n2,m;
        cin>>n1>>n2>>m;

        long long int x = 1;
        while(n1 >= x && n2 >= x && (n1&&n2) && x <= m) {
            n1 -= x;
            n2 -= x;
            x++;
        }

        //cout<<n1<<n2<<m<<endl;
        long long int s = n1 + n2;
        if(n1&&n2) {
            s -= 2 * min(n1,n2);
        }

        cout<<s<<endl;
    }
    
    return 0;
}
