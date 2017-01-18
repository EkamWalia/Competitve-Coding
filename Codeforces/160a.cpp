#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],count=0,ttlsum=0;

    for(int i=0;i<n;i++) 
    {
      cin>>a[i];
      ttlsum+=a[i];
    }

    sort(a,a+n);
    	
    int sum=0;
    
    for(int i=n-1;i>=0;i--)
    {
       if(sum<=ttlsum-sum)
       {
         sum+=a[i];
         count++;
       } 
    }

    printf("%d\n",count);
    return 0;
}