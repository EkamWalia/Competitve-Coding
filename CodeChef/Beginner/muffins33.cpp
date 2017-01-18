#include<iostream>
using namespace std;
int main()
{
	int i=0,size,max=0,t,n;
	cin>>t;
	while(t--)
	{  max=0;
	   cin>>n;
	   for(i=1;i<=n;i++)
	      {
	         if(n%i>=max) {max=n%i;size=i;}
	      }
	   cout<<size<<endl;   
	}

    return 0;
}
