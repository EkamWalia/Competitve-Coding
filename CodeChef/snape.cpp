#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,b,ls;
	float rsmin,rsmax;
	cin>>t;
	while(t--)
	{
		cin>>b>>ls;
		rsmin=sqrt(ls*ls-b*b);
        rsmax=sqrt(ls*ls+b*b);
        cout<<rsmin<<" "<<rsmax<<endl;
	}
	return 0;

}