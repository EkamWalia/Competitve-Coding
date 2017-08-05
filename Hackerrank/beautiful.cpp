#include<bits/stdc++.h>
using namespace std;
int isvowel(char a[],char x)
{
	for(int j=0;j<6;j++)
		{
			if(x==a[j])
			{
				return 1;
			}
		}
	return 0;
}
int main()
{
	string s;
	cin>>s;
	char a={'a','e','i','o','u','y'};

	int flag=0;

	for(int i=0,n=s.length();i<n-1;i++)
	{
		if(s[i]==s[i+1])
		{
			flag=1;
			
		}
		
        if(isvowel(s[i] && isvowel(s[i+1]))) flag=1;
        
		if(flag==1) break;
	}

	flag==0?cout<<"YES\n":cout<<"NO\n";
	return 0;
}