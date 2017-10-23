#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
         int n,k;
	 cin>>n>>k;
	 int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];
	 sort(a,a+n);
	 int days=0,count=0;
	 for(int i=0;i<n;i++)
	 {   days+=a[i];
	     if(days<=k)
	  	count++;
	      else break;
	 }
			     
	 cout<<count<<endl;

 int i=0;
	while(count--)
	{
		if(count!= 0)
		cout<<a[i]<<" ";
		else
		cout<<a[i]<<endl;
		i++;
	}
    return 0;
}

