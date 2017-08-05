#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int temp;
		int sum=0;
		int need=0;
		for(int i=0;i<n;i++) 
		{
			cin>>temp;
			sum+=temp;
		}

		for(int i=0;i<n/2+1;i++)
		{
			need+=(i+1);
		}
		need-=n/2+1;

		long long int min=0;
		min = abs(sum-need);
		
		cout<<min<<endl;
	}
	return 0;
}