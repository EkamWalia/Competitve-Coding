#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	string s;
	cin>>s;
	int flag=0;

	while(flag==0)
	{
		flag=1;
		for(int i=1;i<n-1;i++)
		{
			if(a[i]=='0' && a[i]=='1' && a[i+1]=='0')
			{
				a[i+1]='0';
				i++;
				count++;
				flag=0;
			}
		}
	}

	return 0;
}