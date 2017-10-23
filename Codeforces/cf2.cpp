#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,w;
	scanf("%d %d" ,&l , &w);

	map<int,int> m;

	for(int i=0;i<10;i++)
	{
		m[i] =i+10;
	}

	for(int i = 9 ;i>-1;i--)
	{
		printf("%d %d\n",i , m[i]);
	}
	return 0;
}
