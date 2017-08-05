#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int i=1,n,sum=0,height=0;
		cin>>n;
		while(1)
		{   
            sum+=i;
            if(sum<=n) {height=i;i++;}
            else break;
        }
        cout<<height<<endl;
	}
	return 0;
}