#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r;
	cin>>l>>r;
	int max=0;
	for(int i=l;i<=r;i++)
	{
		for(int j=l;j<=r;j++)
		{
			//cout<<(i^j)<<endl;
			if( (i^j )> max)
		    max=i^j;
		}
	}
	//cout<<(l^r)<<endl;
	cout<<max<<endl;
	return 0;
}