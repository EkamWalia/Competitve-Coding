#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int sum1=0,sum2=0,n;
	cin>>n;
    int temp;
	if(n%2==0)
	{
		temp=((n*(2+n))/4)-((n*n)/4);
		cout<<temp<<endl;
	}

	else 
	{
		temp=(((n-1)*(n+1))-(n+1)*(n+1));
		cout<<temp/4<<endl;
	}
	return 0;
}