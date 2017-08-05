#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int l;
	cin>>l>>s;

	int count=0;

	for(int i=0;i<l+1;i++)
	{
		for(int k=0;k<l+1;k++)
		{
			int temp=sqrt((k+1)*(i+1));

			if(temp==sqrt)
			{
				if(s[i]=='a' && s[temp-1]=='b' && s[k]=='c') count++;
			}

		}
	}
	cout<<count<<endl;
	return 0;
}