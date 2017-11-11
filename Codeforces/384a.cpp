#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

    char a[n][n];
    int count=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i%2 == 0 && j%2 == 0) {a[i][j] = 'C';count++;}
            else if(j%2 == 1 && i%2 == 1) {a[i][j] = 'C';count++;}
            else a[i][j] = '.' ;
        }
    }

    printf("%d\n",count);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%c",a[i][j]);
        printf("\n");
    }
}