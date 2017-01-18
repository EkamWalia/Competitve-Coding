#include<iostream>
using namespace std;
int main()
{
	int n,dig1,dig2,t;
	cin>>t;
	while(t--)
	   {
	     cin>>n;
	     dig1=n%10;
	     while(n!=0)
	       {   
	           dig2=n%10;
	           n=n/10;
           }
         cout<<dig1+dig2<<endl;  
	   }
	return 0;   
}