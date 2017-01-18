#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   int rev=0,n;
	   cin>>n;
	   while(n!=0)
	   {
	      rev=rev*10+(n%10);
	      n/=10;
	   }
	   cout<<rev<<endl;
	}
}
