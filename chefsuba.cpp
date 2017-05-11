#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int n,k,p;
	
	cin>>n>>k>>p;
	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	string test;
	cin>>test;
	int t=test.length();
	for(int i=0;i<t;i++)
	{
		if(test[i]=='!')
		{
			int temp=a[n-1];
			for(int j=n-1;j>0;j--)
			{
				a[j]=a[j-1];
			}
			a[0]=temp;
		
		}

		else
		{
			int maxi=0,temp=0,run=0;

			for(int j=1;j<n;j++)
			{
				if(a[j]==1 && a[j-1]==1) {run++;temp=run;}
				else {run=0;}
				if(temp!=0)
				maxi=max(maxi,temp+1);
			}
			cout<<min(maxi,k)<<endl;
		}
	}

	return 0;
}