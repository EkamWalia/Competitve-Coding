#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n,l;
	scanf("%d %d",&n,&l);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(a,a+n);

	double rad = max(a[0]-0 ,l-a[n-1]);
	for(int i=0;i<n-1;i++)
	{	
		rad = max(rad  , (a[i+1] - a[i])/2.0);
	}
	printf("%f\n",rad);
    return 0;
}

