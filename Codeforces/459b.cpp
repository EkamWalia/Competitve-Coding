#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d" , &n);
    int a[n];
    int mini=-1 , maxi =-1;   
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i == 0)
        {
            mini = maxi = a[i];
            mini = min(mini , a[i]);
        }
        else
        {
            maxi = max(maxi , a[i]);
        }
    } 


    int c1,c2;
    c1=c2=0;

    for(int i=0;i<n;i++)
    {
        if(a[i] == mini) c1++;
        else if(a[i] == maxi) c2++;
    }
    
    if(mini != maxi)
    printf("%d %d\n" ,maxi-mini , c1*c2);
    else{
        printf("1 %d %d\n" , 0 ,n*(n-1)/2);
    }
    return 0;
}