#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,flag=1,temp;
		cin>>n;
        temp=sqrt(n);
		for(int i=2;i<n;i++)
		{
			if(n%i==0) {flag=0;break;} 
		}
		if(flag==1) cout<<"yes"<<endl;
		if(flag==0) cout<<"no"<<endl;
	}
    return 0;
}