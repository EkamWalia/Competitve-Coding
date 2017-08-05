#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int k;
		while(q--)
		{
			cin>>k;
			int rem;
			int count=0;
			int index=-1;
			for(int i=n-1;i>=0;i--)
			{
				if(a[i]>=k) count++;
				else {rem=i;index=i;break;}
			}
			int req;
			while(index>=0)
			{
				req=k-a[index];
				if(rem>=req)
				{
					rem-=req;
					count++;
					index--;				
				}
				else break;
				
			}
			cout<<count<<endl;
            
		}

	}
	return 0;
}