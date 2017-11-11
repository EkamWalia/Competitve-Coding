#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,c,d,k,p , nl,np;
    scanf("%d %d %d %d %d %d %d %d" , &n , &k , &l , &c , &d , &p , &nl , &np);

    int ml = k*l;
    int slices = c*d;

    printf("%d\n" , min(ml/(nl*n) ,min(slices/n , p/(n*np))));

    return 0;
}