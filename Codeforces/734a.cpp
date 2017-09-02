#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n;
	scanf("%d",&n);
	string s;
	cin>>s;
	int a[2]={0};
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'A')
			a[0]++;
		else
			a[1]++;
	}

	if(a[0] > a[1])
		printf("Anton\n");
	else if(a[1]>a[0])
		printf("Danik\n");
	else
		printf("Friendship\n");
    return 0;
}

