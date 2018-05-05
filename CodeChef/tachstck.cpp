#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d;
    cin>>n>>d;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a, a+n);

    int pairs = 0;

    for(int i=0;i<n-1;i++) {
        if(a[i+1] - a[i] <= d) {
            pairs ++;
            i += 1;
        }
    }

    cout<<pairs<<"\n";
    return 0;
}
