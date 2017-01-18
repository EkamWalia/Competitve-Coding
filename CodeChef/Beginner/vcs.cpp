#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int x,int length)
{
	int  start=0,end=length-1,mdpnt;

	while(start<=end)
	{
      mdpnt=(end+start)/2;
      if(a[mdpnt]==x) return 1;
      else if(a[mdpnt]>x) end=mdpnt-1;
      else if(a[mdpnt]<x) start=mdpnt+1;
	}

    return 0;
}

int main()
{
	int t;
	cin>>t;
    while(t--)
    {
       int m,n,k;
       int flag1,flag2,ti=0,uu=0;
       cin>>n>>m>>k;

       int files[n],ignored[m],tracked[k];
       
       for(int i=0;i<m;i++) cin>>ignored[i];
       for(int i=0;i<k;i++) cin>>tracked[i];
       
       for(int i=1;i<=n;i++)
       {
          flag1=flag2=0;

          flag1=binarysearch(ignored,i,m);
          flag2=binarysearch(tracked,i,k);

          
          
          if((flag1==0)&&(flag2==0)) uu++;
          else if((flag1==1)&&(flag2==1)) ti++;

       }
       cout<<ti<<" "<<uu<<endl;
    }
    return 0;
}

