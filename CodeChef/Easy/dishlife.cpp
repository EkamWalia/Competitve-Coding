#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
	    int a[k+1]={0};
        int flag1,flag2=1,flag3=1,temp,num;
        flag1=1;
        while(n--)
        {  
           
           cin>>temp;
           while(temp--)
           {
           	cin>>num;a[num]=1;
           }
           for(int i=1;i<=k;i++)
           {
           		if(a[i]==0)
           		{
                 flag1=0;
                 break;
                 //cout<<i<<" "<<a[i]<<endl;
           		}
           		
           }
           //cout<<flag1<<endl;
        
        }
        if(flag1==1)
        {
            cout<<"some\n";
            flag2=0;
        }
           
         else if(flag2==0) continue;
        else
        {
        	for(int i=1;i<=k;i++)
        	{
        		if(a[i]==0)
        		{
        			flag1=1;
        			break;
        		}
        	}
        	flag1==1?cout<<"sad\n":cout<<"all\n";
        }
	}
	return 0;
}