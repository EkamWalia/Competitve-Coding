#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2 == 0)
    {
        int k = n/2;

        printf("%d\n" , k);
        for(int i=0;i<k;i++)
            printf("%d " ,2);
        printf("\n");
    }
    else
    {
        int k = (n-3)/2 + 1;
        printf("%d\n",k);
        for(int i=0;i<k-1;i++)
            printf("%d ",2);
        printf("3\n");
    }
    return 0;
}