#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n;
	scanf("%d",&n);
	int groups=1;
	string prev,curr;

	cin>>prev;
	n-=1;
	while(n--)
	{
		cin>>curr;

		if(prev[1] == curr[0])
			groups++;

		prev = curr;
	}

	printf("%d\n",groups);
	return 0;
}
