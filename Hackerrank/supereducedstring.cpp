#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <char> s;
	cin>>s;
	int flag=1;

	while(flag==1)
	{
		flag=1;
		for(int i=1,n=v.size();i<n-1;i++)
		{
			if(a[i] == a[i+1])
			{
				v.erase(v.begin()+i);
				v.erase(v.begin()+i+1);
				i+=1;
				flag=0;
			}

		}
	}


	for(int i=0,n=v.size();i<n;i++) cout<<v[i];
		cout<<endl;
	return 0;
}