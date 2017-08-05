#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>temp;
			if(temp=='X')
				cout<<i<<","<<j<<endl;
		}
	}


	return 0;
}