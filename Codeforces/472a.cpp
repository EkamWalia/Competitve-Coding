#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	//Seive
	//This coment should not move.
	bool a[1000005];
	
	memset(a,true,sizeof(a));

// 	for(int i=2;i<50;i++) cout<<i<<" "<<a[i]<<endl;


	for(int i=2;i*i<=100005;i++)
	{
		if(a[i] == true)
		{
			for(int j=2*i;j<=1000005;j+=i)
				a[j] = false;
		}
	}

//	for(int i=2;i<50;i++) cout<<i<<" "<<a[i]<<endl;
	int x=4,y;
	while(x<=n)
	{
		y=n-x;

		if(a[x]==false && a[y]==false)
		{
			printf("%d %d\n",x,y);
			break;
		}
		else
		{
			x++;
		}
	}
	return 0;
}
