#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp,a[n+1],b[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
	{
      temp=a[i];
      b[temp]=i;
	}
	for(int i=1;i<=n;i++) cout<<b[i]<<" ";
	cout<<endl;
	return 0;
}