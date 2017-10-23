#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int sum1=0,sum2=0,n;
	cin>>n;
	if(n%2==0)
	{
		sum1=((n*(2+n))/4)-((n*n)/4);
		cout<<sum1<<endl;
	}

	else
	{
		sum1=(((n-1)*(n+1))-(n+1)*(n+1));
		cout<<sum1/4<<endl;
	}
	return 0;
}
