#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n<m) cout<<"-1\n";
	else 
	{
		float moves;
		float temp;
		if(!(n%2))
		{
			moves=n/2;
		}
		else
		{
			moves=n/2+1;
		}
		temp=2*moves;
		moves = ceil(moves/m)*m;
		temp>=moves? cout<<(int)moves<<endl : cout<<"-1\n";
	}
	return 0;
}