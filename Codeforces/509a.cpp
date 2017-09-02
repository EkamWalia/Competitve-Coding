#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n;
	scanf("%d",&n);

	int a[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 || j==0)
				a[i][j] = 1;
			else
				a[i][j] = a[i-1][j] + a[i][j-1];
		}

	}

	printf("%d\n",a[n-1][n-1]);
	return 0;
}

