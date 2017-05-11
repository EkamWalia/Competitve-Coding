#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);

	int n=s.length(),len=0;
	char a[n];
	for(int i=0;i<n;i++)
	{
		if(s[i]!=' ')
			{
				a[i]=s[i];
				len++;
			}
	}
	a[n]='\0';
    int r=floor(sqrt(len)),c=ceil(sqrt(len));
    int k=0;
    for(int i=0;i<r;i++)
    {
    	for(int j=0;i<c;j++)
    	{
    		cout<<a[k];
    		k++;
    	}
    	cout<<endl;

    }
	return 0;
}