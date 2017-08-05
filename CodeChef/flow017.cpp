#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,a[3],b;
		
		for(i=0;i<3;i++) 
		{cin>>a[i];}

	    for(i=0;i<2;i++)
	    {
	    	for(int j=0;j<2-i;j++)
	    	{
	    		if(a[j]>a[j+1])
	    		{
	    			b=a[j];
	    			a[j]=a[j+1];
	    			a[j+1]=b;
	    		}
	    	}
	    }

	    cout<<a[1]<<endl;

	}
	return 0;
}