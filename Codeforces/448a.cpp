#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3;
	int b1,b2,b3;
	int n;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	int temp1= ceil((a1+a2+a3 ) / 5.0) ;
	int temp2 = ceil((b1+b2+b3 ) / 10.0) ;

	if(temp1+ temp2 <= n) cout<<"YES\n";
	else cout<<"NO\n"; 
	return 0;
}