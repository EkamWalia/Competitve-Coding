#include<iostream>
using namespace std;
int main()
{
	int fact,n,i,t;
	cin>>t;
	while(t--)
	  {  cin>>n;
	     fact=1;
	     for(i=1;i<=n;i++) fact*=i;
	     cout<<fact<<endl;
	  }
	return 0;
}