#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p;
	cin>>p;
	while(p--)
	{
		string a,b;
		cin>>a>>b;
		int p[26]={0},q[26]={0};

		for(int i=0,n=a.length();i<n;i++) p[a[i]-'a']++;
		for(int i=0,n=b.length();i<n;i++) q[b[i]-'a']++;
		int flag=1;
		for(int i=0;i<26;i++)
		{
			if(p[i]==q[i] && p[i]!=0)
			{
				flag=0;
				break;
			}
		}

		flag==0?cout<<"YES\n":cout<<"NO\n";
	}
	return 0;
}