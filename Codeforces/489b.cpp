#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b,g;
	scanf("%d" , &b);

	int boy[101]={0};
	int temp;
	for(int i=0;i<b;i++)
	{
		scanf("%d" , &temp);
		boy[temp]++;
	}

	scanf("%d" , &g);

	int girl[101]={0};

	for(int i=0;i<g;i++)
	{
		scanf("%d" , &temp);
		girl[temp]++;
	}

	int pairs=0;

	for(int i=0;i<101;i++)
	{	
		if(i!=1)
		{	
			temp = min(boy[i],girl[i-1]);
			pairs += temp;
			boy[i] -= temp;
			girl[i-1] -= temp;

			temp = min(boy [i-1] , girl[i]);
			pairs += temp;
			boy[i-1] -= temp;
			girl[i] -= temp;
		}	

		temp = min(boy[i] , girl[i]);
		pairs += temp;
		boy[i] -= temp;
		girl[i] -= temp;
	}

	printf("%d\n",pairs);
	return 0;
}	