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
		int n=s.length();
		if(n%2==1) 
		{
			cout<<"-1\n";
			continue;
		}
		int a[26]={0},b[26]={0};

		for(int i=0;i<n/2;i++)
		{
			a[s[i]-'a']++;
		}

		for(int i=n/2;i<n;i++)
		{
			b[s[i]-'a']++;
		}

		int count=0;

		for(int i=0;i<26;i++)
		{
			count+=abs(a[i]-b[i]);
		}

		cout<<count/2<<endl;
	}
	return 0;
}