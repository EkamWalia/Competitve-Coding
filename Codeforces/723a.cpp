#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);
	int dis=0;
	if(a>=min(b,c) && a<= max(b,c))
	{
		dis = abs(b-a) + abs(c-a);
	}
			
	 if(b>=min(a,c) && b<= max(a,c))
       	{
		 dis = abs(b-a) + abs(c-b);
        }

	  if(c>=min(b,a) && c<= max(b,a))
		          {
				                  dis = abs(b-c) + abs(c-a);
						          }

	  	printf("%d\n", dis);

		return 0;
}
