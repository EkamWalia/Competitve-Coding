#include<iostream>
using namespace std;;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,d,n,sumdn=0;
		cin>>d>>n;
		while(d--)
		{   sumdn=0;
            for(i=1;i<=n;i++) sumdn+=i;
            n=sumdn;	
		}
		cout<<sumdn<<endl;
	}
	return 0;

}