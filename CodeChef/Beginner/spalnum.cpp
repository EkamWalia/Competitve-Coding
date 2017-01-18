#include<iostream>
using namespace std;
int palindorme(int num)
{
	int rev=0,temp=num;

	while(temp!=0)
	{
	  rev=(rev*10)+(temp%10);
	  temp/=10;
	}
	if(rev==num) return 1;
	else return 0;
}
int main()
{
	int t,l,r,flag,sum;
	cin>>t;
	while(t--)
	{  sum=0;
	   cin>>l>>r;

	   for(int i=l;i<=r;i++)
	   {
	     flag=palindorme(i);
	     if(flag==1) {sum+=i;}
	   }
	   cout<<sum<<endl;

	}
	return 0;
}