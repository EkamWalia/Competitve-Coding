#include<iostream>
using namespace std;
int main()
{
	int t,n,m,score=0;
	cin>>t;
	while(t--)
	{   int i,j;
		score=0;
		cin>>n>>m;
		bool a[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				a[i][j]=0;
			}
		}


		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				a[i][j]=1;
				if(a[i-1][j]==1) score++;
				if(a[i][j-1]==1) score++;
			}
		}
		cout<<score<<endl;
    }

}