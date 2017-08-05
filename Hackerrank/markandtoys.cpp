#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n,k;
	cin>>n>>k;
	ll a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);
    ll cost=0,count=0;
	for(int i=0;i<n;i++)
	{    cost+=a[i];
		if(cost<=k)
		{
			count++;
		}
		else break;
	}
	cout<<count<<endl;
	return 0;
}