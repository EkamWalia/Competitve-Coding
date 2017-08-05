#include<bits/stdc++.h>
using namespace std;
int main()
{


	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
	int temp,sum=0,runsum=0;
	for(int i=n-1;i>=0;i--)
	{
		temp=a[i];
		sum+=runsum%temp;
		runsum+=temp;
	}	
	cout<<sum<<endl;
	return 0;
}