#include<iostream>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
       int j,i,n,count=0;
       cin>>n;
       int a[n];
       for(i=0;i<n;i++) cin>>a[i];

       int sum=0,prod=1;

       for(i=0;i<n;i++)
       { sum=0;prod=1;
         for(j=i;j<n;j++)
          {
             sum+=a[j];prod*=a[j];
             if(sum==prod) count++;
          }

       }
       cout<<count<<endl;
    }
	

	

	return 0;
}