#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n],c[n],count=0;

	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}

	for(int i=0;i<n;i++)
	{
		if((a[i]+b[i]+c[i])>=2) count++;
	}
	printf("%d\n",count);
}