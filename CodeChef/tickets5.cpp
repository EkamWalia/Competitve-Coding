#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
       string s;
       cin>>s;
       int i=2,length=s.length(),flag=0;
       
       while(i<length)
       {
       	if((i%2==0)&&(s[i]!=s[0])) {flag=1;break;}
       	else if((i%2==1)&&(s[i]!=s[1])) {flag=1;break;}
        i++;
       }
       if(flag==0) cout<<"YES";
       else cout<<"NO";
       cout<<endl;
	}
}