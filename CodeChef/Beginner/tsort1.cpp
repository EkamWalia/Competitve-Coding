#include<iostream>
#include<vector>
using namespace std;
int main()
{   int i,j;
	int t,temp;
	cin>>t;
	int arr[t];
	for(i=0;i<t;i++)
	{
	    cin>>arr[i];
	    
	}
	
	for(i=0;i<t-1;i++)
	   {
	      for(j=0;j<t-1-i;j++)
	          {
	             if(arr[j]>arr[j+1])
	                {
	                  temp=arr[j];
	                  arr[j]=arr[j+1];
	                  arr[j+1]=temp;
	                }
	          }
	   }

	for(i=0;i<t;i++) cout<<arr[i]<<endl;
     return 0;
}