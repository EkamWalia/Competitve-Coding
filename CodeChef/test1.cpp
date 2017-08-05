#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int flag=0,flag2=0;

		string a[2];
		
		cin>>a[0];
		cin>>a[1];
				

		
		int start,row;
		for(int i=0;i<n;i++)
		{
			if(a[0][i] == '#' ) 
			{
				start=i;row=0;break;
			}
			if(a[1][i] == '#' ) 
			{
				start=i;row=1;break;
			}
		}
		cout<<start<<" "<<row<<endl;
		for(int i=start;i<n-1;i++)
		{
			if(a[row][i] == '#' && a[row][i+1] == '#')
			{
				continue;
			}

			else if(row == 1)
			{
				if(a[0][i] == '#')
					row=0;
				else 
				{
					flag=1;start=i;break;
				}
			}

			else if( row == 0)
			{
				if(a[1][i] == '#')
				{
					row = 1;

				}
				else 
				{
					flag=1;start=i;break;
				}
			}

		}
		if(flag==1)
		{
			flag=0;
			for(int i=start;i<n-1;i++)
			{
				if((a[0][i]=='#') || (a[1][i]=='#'))
				{
					flag=1;break;
				}
			}
		}
		flag == 0 ? cout<<"yes\n": cout<<"no\n";
	}
	return 0;
}