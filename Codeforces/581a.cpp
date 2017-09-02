#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	printf("%d %d\n",min(a,b),(max(a,b)-min(a,b))/2);
    return 0;
}

