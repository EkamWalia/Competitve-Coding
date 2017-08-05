#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;

		int flag=0;

		for(int i=1,n=a.length();i<n;i++)
		{

			if(abs(a[i]-a[i-1]) == abs(a[n-i]-a[n-1-i]))
			{
				flag=0;
			}
			else 
			{
			   flag=1;
			   break;
			}
		}

		flag==0?cout<<"Funny\n":cout<<"Not Funny\n";

	}
	return 0;
}