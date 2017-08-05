#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d" , &t);

	while(t--)
	{
		long long int n;
		cin>>n;

		long long int count=(n-1)/3;

		long long int sum=0;

		sum += ((count*3*(count+1))>>1);


		count = (n-1)/5 ;
		
	       sum += ((count*5*(count+1))>>1);
	

		
		count = (n-1)/15;

		sum -= ((count*15*(count+1))>>1);

		cout<<sum<<endl;
	}
	
	return 0;
}
