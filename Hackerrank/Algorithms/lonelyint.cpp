#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b[101]={0};
    int temp;	
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		b[temp]+=1;
	}

    for(int i=0;i<101;i++)
    {
    	if(b[i]==1)
    	{
    		cout<<i<<endl;
    		break;
    	}
    }

}