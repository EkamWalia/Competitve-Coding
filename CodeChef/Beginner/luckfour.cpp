#include<iostream>
using namespace std;
int main()
{
	int occ,t,n,dig;
	cin>>t;
	while(t--)
	 { occ=0;
	   cin>>n;
	   while(n!=0)
	      {  dig=n%10;
	        if(n%10==4) occ++;

	        n=n/10;
	      }
	    cout<<occ<<endl;  
	 }
	return 0; 
}