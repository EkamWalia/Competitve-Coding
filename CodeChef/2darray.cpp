#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a[6][6];
	int sum=0,maxi=0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}

	for(int i=0;i<4;i++)
	{
		for(int j=1;j<5;j++)
		{

			sum+=a[i][j-1]+a[i][j+1]+a[i][j];
			sum+=a[i+1][j];
			sum+=a[i+2][j]+a[i+2][j+1]+a[i+2][j-1];

			maxi=max(maxi,sum);
			sum=0;
		}
	}

	cout<<maxi<<endl;
	return 0;
}