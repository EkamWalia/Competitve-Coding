#include<iostream>
using namespace std;
int main()
{
	int t,n,numnts;
	cin>>t;
	while(t--)
	{ cin>>n;
	  numnts=0;
	  while(n!=0)
	  {
	  	if(n>=100) {numnts++;n-=100;}
	  	else if(n>=50) {numnts++;n-=50;}
	  	else if(n>=10) {numnts++;n-=10;}
	  	else if(n>=5) {numnts++;n-=5;}
        else if(n>=2) {numnts++;n-=2;}
        else  {numnts++;n-=1;}
	  }
	  cout<<numnts<<endl; 
   }
   return 0;

}