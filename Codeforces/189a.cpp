#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n,a,b,c;
	scanf("%d %d %d %d",&n,&a,&b,&c);
	int count=0;
	count += n/min(a,min(b,c));
	
	printf("%d\n",count+1);
	
    return 0;
}

