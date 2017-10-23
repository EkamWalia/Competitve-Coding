#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	int t,f,h;
	int flag=1;
	t=h=f=0;
	int temp;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);

		if(temp == 25) t++;
		else if(temp == 50)
		{
			if(t == 0)
			{
				flag=0;
				break;
			}
			else
			{
				f++;
				t--;
			}
		}
		else
		{
			if(t!=0 and f!= 0)
			{
				t--;
				f--;
				h++;
			}
			else if(t>=3)
			{
				t-=3;
				h++;
			}
			else
			{
				flag=0;
				break;
			}
		}

	}

	if(flag) printf("YES\n");
	else printf("NO\n");
}