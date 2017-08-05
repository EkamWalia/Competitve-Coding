#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  if(n == 1)
  {
  	cout<<"1\n";
  	return 0;
  }
  int count=1,maxi=0;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];

  for(int i=0;i<n-1;i++)
  {
  	if(a[i+1] >= a[i]) 
  	{
  		 count++;
  	}

  	else
  	{
  		count=1;
  	}

  	maxi = max(count,maxi);
  } 

  cout<<maxi<<endl;
  return 0;
}