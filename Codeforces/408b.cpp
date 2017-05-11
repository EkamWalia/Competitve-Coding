#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int r, int x)
{
	int l=0;
	r--;
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    // Check if x is present at mid
    if (arr[m] == x) 
        return 1;  
 
    // If x greater, ignore left half  
    if (arr[m] < x) 
        l = m + 1; 
 
    // If x is smaller, ignore right half 
    else
         r = m - 1; 
  }
 
  // if we reach here, then element was not present
  return 0; 
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a[m];
	for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
	int flag=1;
    int u,v,x;
    while(k--)
    {
    	cin>>u>>v;
    	if(u==flag)
    	{
    		x=search(a,m,u);
   			if(x==1)
   			{
    			cout<<u<<endl;
    			return 0;
    		}
    		else 
    		flag=v;
    	}

    	else if(flag==v)
    	{
    		x=search(a,m,v);
   			if(x==1)
   			{
    			cout<<v<<endl;
    			return 0;
    		}
    		else 
    		flag=u;
    	}
    	else
    	{
    		continue;
    	}
    }

    cout<<flag<<endl;
	return 0;
}