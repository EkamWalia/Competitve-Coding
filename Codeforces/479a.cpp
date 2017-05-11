#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int p,q,r,s,m,n;
	p=a+b+c;
	q=a+b*c;
	r=a*b+c;
	s=a*b*c;
	m=(a+b)*c;
	n=a*(b+c);
	cout<<max(max(p,max(q,n)),max(r,max(s,m)))<<endl;
	return 0;
}