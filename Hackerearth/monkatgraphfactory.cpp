#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int sum=0 , flag=0;
	int temp;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		sum+=temp;
		if(temp == 0)
		{
			flag=1;
			break;
		}
	}

	if(flag == 1) cout<<"NO\n";
	else if(sum/2 == n-1) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}