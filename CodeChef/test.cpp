#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int change;
	cin>>change;
	int count=1;

	while(1)
	{
		if((count*n)%10 == 0)
		{
			break;
		}
		else if(((count*n)%10) == change)
		{
			break;
		}
		else 
			count++;
	}

	cout<<count<<endl;
	return 0;
}