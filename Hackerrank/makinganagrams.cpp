#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int p[26]={0},q[26]={0};
	int count=0;
	for(int i=0,n=a.length();i<n;i++)
	{
		count=a[i]-'a';
		p[count]++;
	}
	for(int i=0,n=b.length();i<n;i++)
	{
		count=b[i]-'a';
		q[count]++;
	}
    count=0; 
	for(int i=0;i<26;i++)
	{
		count+=abs(p[i]-q[i]);
	}

	cout<<count<<endl;

	return 0;
}