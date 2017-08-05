#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int temp,t;
	long long int sum=0;
	vector <int> v;

	for(int i=0;i<n;i++)
	{
		cin>>temp>>t;
		if(t==1)
			v.push_back(temp);
		else 
			sum+=temp;
	}

	sort(v.begin(),v.end());
    int l=v.size();
	for(int i=l-1,count=0;i>=0;i--)
	{
		if(count<k) 
		{
			sum+=v[i];
			count++;
		}
		else 
			sum-=v[i];
	}
	cout<<sum<<endl;
	return 0;
}