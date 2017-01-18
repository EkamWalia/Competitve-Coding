#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,tram=0,capacity=0;
	while(n--)
	{
		cin>>a>>b;
		tram+=b-a;
		if(capacity<tram) capacity=tram;
	}

	cout<<capacity<<endl;
		
}
