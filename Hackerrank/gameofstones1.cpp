#inlcude<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int flag=0;//0==P1 1==P2
			
		if(n>=5)
		{
			flag=(n/5)%2;
			n=n%5;
		}
		if(n>=3)
		{
 
			flag=(n/3)%2;
			n=n%3;
		}
		if(n>=2) 
	    {

			flag=(n/2)%2;
			n=n%2;
		}
		
		flag==0?cout<<"First\n":cout<<"Second\n";
	}
	return 0;
}