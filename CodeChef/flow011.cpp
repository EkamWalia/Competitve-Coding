#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
       float basic;
       cin>>basic;
       if(basic<1500) cout<<basic*2<<endl;
       else cout<<basic+((basic*98)/100)+500<<endl;

	}
	return 0;
}