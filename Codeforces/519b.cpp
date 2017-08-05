#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000000005]={0};

	int n;
	scanf("%d" , &n);

	for(int temp, i=0;i<n;i++)
	{
		scanf("%d",&temp);
		a[temp]++;
	}

	for(int i=0,temp;i<n-1;i++)
	{
		scanf("d",&temp);
		a[temp]++;
		
	}
	
	return 0;

}
