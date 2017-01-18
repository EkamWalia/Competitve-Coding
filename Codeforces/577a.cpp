#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int n,x,count=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
       if((x/i<=n)&&(x%i==0)) count++;
	}
	printf("%d\n",count);
	return 0;
}