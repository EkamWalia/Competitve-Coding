#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int d1,d2,d3;
	scanf("%lld %lld %lld" , &d1,&d2,&d3);

	cout<<min(min(2*(d1+d2) , 2*(d1+d3)) , min((d1+d2+d3),2*(d2+d3)))<<endl;

	return 0;
}