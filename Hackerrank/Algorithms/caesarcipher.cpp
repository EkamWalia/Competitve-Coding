#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
    cin>>s;

	int k;
	cin>>k;
    //cout<<"Enter string\n";

	int temp;
	for(int i=0;i<n;i++)
	{
		if(isalpha(s[i]))
		{   if(islower(s[i]))
			{
				temp=s[i]-'a';
				temp=(temp+k)%26;
				s[i]=temp+'a';
			}
			if(isupper(s[i]))
			{
				temp=s[i]-'A';
				temp=(temp+k)%26;
				s[i]=temp+'A';
			}
		}
	}

	cout<<s<<endl;
	return 0;
}