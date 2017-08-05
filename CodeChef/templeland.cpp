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
		int flag=0;
    	if(n%2==0) {cout<<"no\n";continue;}
    	if(a[0]!=1) {cout<<"no\n";continue;}
    	if(a[n-1] != 1) {cout<<"no\n";continue;}


    		for(int i=1;i<n/2;i++)
    		{
    			if((a[i+1]-a[i]) != 1)
    			{
    				flag=1;
    				break;
    			}
    		}
    		for(int i=n/2;i<n-1;i++)
    		{
    			if((a[i]-a[i+1]) != 1)
    			{
    				flag=1;
    				break;
    			}
    		}


    	if(flag==0) cout<<"yes\n";
    	else cout<<"no\n";
    }
	return 0;
}
