#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int zero=0,one = 0;

		for(int i=0;i<n;i++)
		{
			if(a[i]=='1') one++;
			else zero++;

		}
	

	cout<<n-(2*min(zero,one))<<endl;
	return 0;
} 