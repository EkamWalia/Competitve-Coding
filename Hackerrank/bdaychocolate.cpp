#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int m,d;
    cin>>d>>m;
    int sum=0,count=0;
    for(int i=0;i<n-m+1;i++)
    {    sum=0;
    	for(int j=0,x=i;j<m;j++,x++)
    	{
    		sum+=a[x];
    	}
    	if(sum==d) count++;
    }
    cout<<count<<endl;
	return 0;
}