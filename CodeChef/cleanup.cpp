	#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		int temp;
		int a[n+1]={0};
		while(m--)
		{
			cin>>temp;
			a[temp]=1;
		}
        temp=1; 
		for(int i=1;i<=n;i++)
		{
			if(temp==1 && a[i]==0)
			{
				a[i]=2;
				temp=2;
			}
			else if(temp==2 && a[i]==0)
			{
				a[i]=3;
				temp=1;
			}
		}

		for(int i=1;i<=n;i++)
		{
			if(a[i]==2) cout<<i<<" ";
		}
		cout<<endl;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==3) cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}