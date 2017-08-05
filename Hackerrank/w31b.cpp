#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		int flag=1;

		while(flag==1)
		{
			flag=0;
			
			for(int i=0;i<n-1;i++)
			{
				if(a[i]-a[i+1]==1 )
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					flag=1;
				}

			}
		}
        flag=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				flag=1;
				break;
			}
		}

		flag==0? cout<<"Yes\n":cout<<"No\n";
	}
	return 0;
}