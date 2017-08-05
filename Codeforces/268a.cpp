#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	int a[n];
	int h[n];

	for(int i=0;i<n;i++) scanf("%d %d",&h[i],&a[i]);

	int count=0;

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] == h[j]) count++;
			if(h[i] == a[j]) count++;
		}
	}

	printf("%d\n",count);

	
	return 0;
}

