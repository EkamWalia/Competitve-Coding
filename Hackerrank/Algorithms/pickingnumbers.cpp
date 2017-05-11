#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[100]={0};
	
	for(int i=0;i<n;i++) cin>>a[i];
    int flag;
    for(int i=0;i<n;i++)
    {    
    	flag=0;
    	for(int j=0;j<n;j++)
    	{
    		if(i!=j && abs(a[i]-a[j])>1)
    		{
    		   flag=1;
    		   break;
    		}
       	}

       	if(flag==0) {b[a[i]]=1;cout<<a[i]<<endl;}
    }
    int count=0;
    for(int i=1;i<100;i++)
    {
    	if(a[i]==1)
    	{ 
    		count++;
   			cout<<i<<" ";
    }}
    cout<<endl<<count<<endl;
	return 0;
}