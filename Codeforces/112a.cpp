#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int flag=0;
	char temp1,temp2;

	for(int i=0;i<s1.length();i++)
	{ temp1=tolower(s1[i]);
	  temp2=tolower(s2[i]);
	  if(((abs(s1[i]-s2[i]))==32)||((abs(s1[i]-s2[i]))==0)) continue;
	  else {flag=temp1-temp2t;break;}
	}

	if(flag>0) printf("1");
	else if(flag<0) printf("-1");
	else printf("0");

	return 0;
}