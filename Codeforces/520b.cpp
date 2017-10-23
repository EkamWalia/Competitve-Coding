#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);

	if( b <= a)
	{
		printf("%d\n",a-b);
	}
	else
	{
		int level[100000];
		memset(level , -1 , 100000*sizeof(int));

		queue<int> q;
		q.push(a);
		level[a] = 0;
		

		while(!(q.empty()))
		{	
			int p = q.front();
			q.pop();
			//printf("%d\n",p);
			if(p*2 > 0 && p*2 <1000000 && level[p*2] == -1)
			{	
				level[p*2] = level[p]+1;
				q.push(p*2);
				//printf("%d %d\n",p*2 , level[p*2]);
			}

			if(p-1 > 0 && p*2 <1000000 && level[p-1]==-1)
			{
				level[p-1] = level[p]+1;
				q.push(p-1);
				//printf("%d %d\n",p-1 , level[p-1]);
			}
			if(p*2 == b || p-1 == b)
				break;
			
		}
		printf("%d\n" , level[b]);
	}
}