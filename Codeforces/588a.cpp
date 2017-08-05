#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	int minp,suma=0;
	int a[n],p[n];

	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&p[i]);
	}

	long long int money = 0;
	
	for(int i=0,j;i<n;i++)
	{	
		suma=a[i];
		j=i+1;
		while(p[i]<=p[j] && j<n)
		{
			suma += a[j];
			j++;
		}
	
		money += suma * p[i];
		i=j-1;

	}
	printf("%lld\n",money);
	return 0;
}
