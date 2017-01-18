#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0,temp;a[10]={0};

	while(n!=0)
	{
      temp=n%10;
      a[temp]++;
      n/=10;
	}

	for(int i=0;i<10;i++)
	{
		 if(a[i]>1)
		 {
		 	
		 }
	}
}