#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x=0;
	scanf("%d",&n);
	while(n--)
	{
		string s;
		cin>>s;
		if(s[0]=='+') ++x;
		else if(s[0]=='-') --x;
		else if(s[2]=='+') x++;
		else if(s[2]=='-') x--; 

		/*if(n==0&&s[2]=='+') x-=1;
		else if(n==0&&s[2]=='-')x+=1;*/ 
	}
	printf("%d",x);
	return 0;
}