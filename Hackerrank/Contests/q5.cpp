#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][2];
	for(int i=1;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	int flag=1,count=0;
	while(flag==1)
	{
		
		int runmax=0,maxi=0,id=0;

		for(int i=0;i<n;i++)
		{
			if(a[i][1]==1)
			{   flag=1;
				runmax=0;
				for(int j=0;j<n;j++)
				{
					if(a[j][0]==a[i][1] && a[j][1]==1) runmax++;
				}
			    runmax+=1;
			    if(runmax>maxi)
			    {
			    	id=i;
			    	maxi=runmax;
			    }
			}
			else flag=0;

		}
		if(flag==1)
		{
			int temp=a[id][0];
			a[temp][1]=0;
			for(int i=0;i<n;i++)
			{
				if(a[i][0]==id) 
				{
					a[i][1]=0;
				} 
			}
			count++;
		}
	}

	printf("%d\n",count);
	return 0;
}