#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;

        int a[m];
        for(int i=0;i<m;i++) cin>>a[i];

        sort(a, a+m);

        int clean=0;
        for(int i=0;i<m;i++) {
            clean++;
            int j=i+1;
            while(j<n && a[j] == a[i]) {
                j++;
            }

            i=j-1;
        }

        cout<<clean<<endl;
    }
    return 0;
}
