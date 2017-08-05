#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int lx,ly;
	cin>>lx;
	int x[lx];

	for(int i=0;i<lx;i++) cin>>x[i];
	cin>>ly;

	int y[ly];
	
	for(int i=0;i<ly;i++) cin>>y[i];

	sort(x,x+lx);
	sort(y,y+ly);

	int flag=0;

	int j=0,k=0;
	
	for(int i=1; i <= n;i++)
	{
		//cout<<i<<endl;
		//cout<<j<<" "<<x[j]<<endl;
		//cout<<k<<" "<<y[k]<<endl;
		flag=1;
		while(j<lx)
		{
			if(x[j] < i) j++;
			else if(x[j] == i) 
			{
				flag=0;
				j++;
				break;
			}
			else
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1)
		{
			
			while(k < ly)
			{
				if(y[k] < i) k++;
				else if(y[k] == i) 
				{
					flag=0;
					k++;
					break;
				}
				else
				{
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1) break;
	}

	flag == 0 ? cout<<"I become the guy.\n" : cout<<"Oh, my keyboard!\n"; 

	return 0;
}