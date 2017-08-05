#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int flag=1,n;
		cin>>n;
		string bob;
		cin>>bob;

		for(int i=0;i<n;i++)
		{
			if(bob[i]=='Y')
			{
				cout<<"NOT INDIAN"<<endl;
				flag=0;
				break;
			}
			if(bob[i]=='I')
			{
				cout<<"INDIAN"<<endl;
				flag=0;
				break;
			}
		}

		if(flag==1) cout<<"NOT SURE"<<endl;
	}
	return 0;
}																																										



	