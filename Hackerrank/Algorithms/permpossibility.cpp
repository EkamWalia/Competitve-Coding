#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++)
  {
		if(a[i]==a[i+1])
		{
			cout<<"NO\n";
		  return 0;
		}
	}
	cout<<"YES\n";

    return 0;
}
