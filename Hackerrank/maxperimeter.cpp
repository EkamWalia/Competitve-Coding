#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	sort(a,a+n);
    //for(int i=0;i<n;i++) cout<<a[i];
	for(int i=n-1;i>=2;i--)
	{
		if(a[i]<a[i-1]+a[i-2])
		{
         	cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i]<<endl;
         	return 0;
		}
	}
	cout<<"-1\n";
	return 0;
}