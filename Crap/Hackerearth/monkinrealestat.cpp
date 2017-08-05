#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int e;
		cin>>e;
		int x,y;
		vector <int> adj[e+1];
		for(int i=0; i<e;i++)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);

		}

		int count = 0;

		for(int i=0;i<e+1;i++)
		{
			if(adj[i].size() != 0)
			count++;
		}
		cout<<count<<endl;
	}

	return 0;
}