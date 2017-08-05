#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int a[26]={0},temp;

	for(int i=0;i<n;i++)
	{
		temp=s[i]-'a';
		a[temp]++;
	}

	int flag=0,odd=1;

	for(int i=0;i<26;i++)
	{
		if(a[i]%2==0)
			continue;
		else if(odd==1)
		{
			odd=0;
		}
		else 
		{
			flag=1;
			break;
		}

	}	

	flag==0?cout<<"YES\n":cout<<"NO\n"
	return 0;
}