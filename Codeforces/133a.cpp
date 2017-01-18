#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int flag=1;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]=='H')||(s[i]=='Q')||(s[i]=='9'))
	       {printf("YES");flag=0;break;}
	}

	if(flag==1) printf("NO");
	return 0;
}