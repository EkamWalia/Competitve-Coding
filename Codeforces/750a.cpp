#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n,k;
	scanf("%d %d",&n,&k);

	int total=0;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		total += 5*i;

		if(total + k>240)
			break;
		count++;
	}
	printf("%d\n",count);


    return 0;
}

