#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,count=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
    if(a[k-1]>0)
    { 	
	  for(int i=0;i<n;i++)
	  {
         if(a[i]>=a[k-1]) count++;
	  }
	  printf("%d\n",count);
	} 

	else
	{
		for(int i=0;i<n;i++)
	  {
         if(a[i]>a[k-1]) count++;
	  }
	  printf("%d\n",count);
	}
	return 0;
}