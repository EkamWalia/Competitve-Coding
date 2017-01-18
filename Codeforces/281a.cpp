#include<bits/stdc++.h>
#include<string>

using namespace std;
int main()
{
	string s;
	cin>>s;
	printf("%c",toupper(s[0]));
	for(int i=1;i<s.length();i++) printf("%c",s[i]);
	printf("\n");
	return 0;
}