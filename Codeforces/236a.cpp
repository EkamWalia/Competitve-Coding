#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int length=s.length();
	int temp,a[26]={0};

	for(int i=0;i<length;i++)
	{  
      temp=int(s[i]-'a');
      a[temp]++;
	}
    int count=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]!=0) count++;
	}
	if(count%2==0) printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
	return 0;
}