#include<bits/stdc++.h>
using namespace std;
void add(int a[],int &l,int i);
int main()
{
	int a[]={0,1,2,4,5,6},length=7;;
	for(int i=0;i<length;i++)
	{
	   if(i==3) 
	   {
	     add(a,length,i);
	   }

	}

	for(int i=0;i<length;i++) cout<<a[i]<<"  ";
	return 0;
}
void add(int a[],int &l,int i)
{
	for(int j=l-1;j>=i;j--)
	     {
	       a[j+1]=a[j];
	     }
	     a[i]=3;l++;
}