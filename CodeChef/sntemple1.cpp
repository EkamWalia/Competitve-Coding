#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];

		int inc[n],dec[n];
		inc[0] = 1; dec[n-1] = 1;
		long long int min=0;

		for(int i=1;i<n;i++)
		{
			if(a[i] > a[i-1]) 
				inc[i] = inc[i-1] + 1;
			else 
				inc[i] = 1;
		}

		for(int i=n-2;i>=0;i--)
		{

			if(a[i] > a[i+1])
				dec[i] = dec[i] + 1;
			else 
				dec[i] = 1;

			cout<<i<<" "<<dec[i]<<endl;
 		}
 		
 		
 		int maxlen = 0, ind=-1;
 		
 		for(int i=0;i<n;i++)
 		{
 			int temp = inc[i] + dec[i] - 1;

 			if(temp > maxlen)
 			{
 				ind = i;
 				maxlen=temp;
 			}
  		}

  		

  		int side=maxlen/2;
  		min=a[ind] - (n/2+1);
  		
  		for(int i=ind-1 ; i >= ind - side ; i--)
  		{
  			min += a[i] - (a[i+1]-1);
  		}

  		for(int i=ind+1 ; i <= ind + side ; i++)
  		{
  			min += a[i] - (a[i-1]-1);
  		}

  		for(int i=0;i<ind - side;i++)
  		{
  			min += a[i];
  		}

  		for(int i= n-1;i> ind+side ; i--)
  		{
  			min += a[i];
  		}

  		cout<<min<<endl;
	}
	return 0;
}