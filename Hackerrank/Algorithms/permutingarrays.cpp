#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector <int> a(n),b(n);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    reverse(b.begin(),b.end());
        int flag=0;
	    for(int i=0;i<n;i++)
	    {
	    	if(a[i]+b[i]<k)
	    	{
	    		flag=1;
	    		break;
	    	}
	    }

	    flag==0?cout<<"YES\n":cout<<"NO\n";

	}
	return 0;
}