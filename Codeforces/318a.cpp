#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k , odds, evens ;
	cin>>n>>k;

	if(n%2 == 0)
	{
		odds = evens =n/2;
		if(k > odds)
		{
			k -= odds;
			cout<<2*k<<endl;
		}
		else
		{
			cout<<2*k -1<<endl;
		}
	}
	else 
	{
		odds = n/2+1;
		evens = n/2;

		if(k > odds)
		{
			k -= odds;
			cout<<2*k<<endl;
		}
		else 
		{
			cout<<2*k-1<<endl;
		}
	}
	return 0;
}