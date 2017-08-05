#include<bits/stdc++.h>
using namespace std ;
int main()
{
	int n;
	string a,b;
	cin>>a>>b;
	int moves=0;
	for(int i=0;i<n;i++)
	{
	  	int x=stoi(a,i,i+1) , y=stoi(b,i,i+1);
		
		moves += min(abs(x-y) , abs(x) + abs(10-y));

	}

	printf("%d",moves);
	return 0;
}

