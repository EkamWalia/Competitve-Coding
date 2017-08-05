#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
    int flag=0;

	for(int i=0,n=s.length() ; i<n ; i++)
	{
		cout<<"i== "<<i<<endl;
		if(s.substr(i,i+3) == "144" )
		{
			cout<<"3 digit substring is "<<s.substr(i,i+3)<<endl;
			i+=3;
		}
		else if(s.substr(i,i+2) == "14")
		{
            cout<<s.substr(i,i+2)<<endl;
			i+=2;
		}
		else if(s[i] == '1')
		{
			cout<<s.substr(i,i+1)<<endl;
			continue;
		}
		else 
		{
			flag = 1;
			break;
		}
 	}

 	flag == 0?cout<<"YES\n":cout<<"NO\n";

	return 0;
}