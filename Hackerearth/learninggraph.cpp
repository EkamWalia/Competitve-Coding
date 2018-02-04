#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int nodes[n];

	for(int i=0;i<n;i++) cin>>nodes[i];

	int a[n][n]={0};
	int x,y;
	for (int i=0;i<m;i++)
	{
		cin>>x>>y;
		a[x][y] = 1;
		a[y][x] = 1;
	}

	for(int i=0;i<n;i++)
	{
		std::vector<int> v;
		
		for(int j=0;j<n;j++)
		{
			if(a[i][j] ==1 )
			{
				v.push_back(nodes[j]);
			}
		}	

		v.sort(v.begin() , v.end());

		int flag=1 , value = v[v.size()+1-k];
		for(int j=0;j<n;j++)
		{
			if(a[i][j] == value)
			{
				cout<<j+1<<endl;
				flag=0;
			} 
		}

		if(flag == 1) cout<<"-1\n";
	}

	return 0;
}