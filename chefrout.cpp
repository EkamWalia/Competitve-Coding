#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int flag=0;
		for(int i=1,n=s.length();i<n;i++)
		{
			if(s[i]<s[i-1])
			{
				flag=1;break;
			}
		}

		flag==0?cout<<"yes\n":cout<<"no\n";
	}
	return 0;
}