#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,w;
	scanf("%d %d" ,&l , &w);

	map<string,string> m;

	for(int i=0;i<w;i++)
	{
		string s1,s2;
		cin>>s1>>s2;

		m[s1]=s2;
	}

	string ans="";

	for(int i=0;i<l;i++)
	{
		string s1 ,temp;
		cin>>s1;
		if(s1.length() <= m[s1].length())
		{
			ans += s1;
		}
		else
			ans += m[s1];

		if(i != l-1)
			ans += " ";
	}

	cout<<ans<<endl;
}