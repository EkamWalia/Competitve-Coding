#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   	int flag = 1;
  		
   	for(int i=1,n=s.length();i<n;i++)
   	{
   		if(islower(s[i]))
   		{
   			flag=0;
   			break;
 
   		}
   	}

   	if(flag == 0) cout<<s<<endl;
   	else
   	{
   		for(int i=0,n=s.length();i<n;i++)
   		{	
   			if(islower(s[i]))
   				cout<<(char)toupper(s[i]);
   			else
   				cout<<(char)tolower(s[i]);
   		}
   		cout<<endl;
   	}
   	return 0;
}