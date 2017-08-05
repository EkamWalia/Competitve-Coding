#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	vector <int> a(n);

	for(int i=0;i<n;i++) cin>>a[i];

	int maxe=*max_element(a.begin() , a.end());
	int mine=*min_element(a.begin() , a.end());

	int time=0;
	int index1=-1 , index2=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i] == maxe)
		{
			index1 = i;
			break;
		}

	}
	time = index1;
	for(int i = n-1;i>-1;i--)
	{
		if(a[i] == mine)
		{
			index2=i;
			break;
		}
	}

	time+=(n-1 -index2);
		if(index2 <index1) time-=1;

	cout<<time<<endl;
	return 0;
}