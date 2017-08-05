#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	int steps=0;

	steps += n/5;

	n -= (n/5)*5;

	steps += n/4 ;

	n -= (n/4)*4;
	steps += n/3;

	n -= (n/3)*3;

	steps += n/2;

	n -= (n/2)*2;

	steps += n;

	printf("%d\n" , steps);

	return 0;
}

