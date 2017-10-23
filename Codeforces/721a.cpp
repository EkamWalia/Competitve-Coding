#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);

	string s;
	cin>>s;

	vector<int> v;

	int size=0,count=0;

	for(int i=0 , len = s.length() ; i<len;i++)
	{
		if(s[i] == 'B')
		{
			size++;
		}
		else if(size != 0)
		{
			v.push_back(size);
			count++;
			size=0;
		}
	}
	if(size != 0)
		{
			v.push_back(size);
			count++;
			size=0;
		}
	printf("%d\n",count);

	if(count !=0)
	{	
		for(int i=0;i<count;i++)
		{
			printf("%d ",v[i]);
		}
		printf("\n");
	}
}