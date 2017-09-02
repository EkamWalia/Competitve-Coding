#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
int  main()
{
	int n,t;
	string s="";
	scanf("%d %d",&n,&t);
	if(n>=2 && t!=10)
	{	
		for(int i=0;i<n;i++)
			s += to_string(t); 
		cout<<s<<endl;
	}
	else if(n >=2 && t == 10)
	{
		s += "1";
		for(int i=0;i<n-1;i++)
			s += "0";
		cout<<s<<endl;
	}
	else if(t != 10)
		printf("%d\n",t);
	else
		printf("-1\n");
    return 0;
}

