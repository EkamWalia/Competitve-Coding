#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;

	scanf("%d %d",&a,&b);

	int rem,curr = a;
	int hrs=0;
	rem = curr;
	while(curr >= b )
	{
		hrs +=  curr;
		rem = curr % b;
		rem += curr / b;
		curr = rem; 
	}

	printf("%d\n",hrs);
	return 0;
}
