#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int sum=0 , count=0;

    for(int i=0;i<n;i++) sum += a[i] ;

    count = (abs(sum) / x);

    count += abs(sum) % x ? 1 : 0;
    printf("%d\n",count); 
    return 0;
}