#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d" , &n);
	int a[4]={0},temp;

	queue<int> q1,q2,q3;

	for(int i=1;i<=n;i++)
	{
		scanf("%d",&temp);

		a[temp]++;

		if(temp == 1) q1.push(i);
		else if(temp == 2) q2.push(i);
		else q3.push(i);
	}

	int mini = min(a[1] , min(a[2],a[3]));

	printf("%d\n",mini);

	while(mini--)
	{
		printf("%d %d %d\n", q1.front() , q2.front() , q3.front());
		q1.pop();q2.pop();q3.pop();
	}
	return 0;
}
