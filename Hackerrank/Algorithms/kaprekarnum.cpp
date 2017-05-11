#include<bits/stdc++.h>
using namespace std;

int iskaprekar(int num)
{
  int square=num*num;
  int temp=square;
  int a[6],i=0;
  while(temp!=0)
  {
    a[i]=temp%10;
    temp/=10;
    i++;
  }
  int n=i-1,sum1=0,sum2=0;
  for(i=0;i<n;i++)
  {
    if(i<=(n/2)) sum1+=a[i];
    else sum2+=a[i];
  }

  if(sum1+sum2 == num) return 0;
  else return 1;
}

int main()
{
  int p,q;
  cin>>p>>q;

  for(int i=p;i<=q;i++)
  {
    if(iskaprekar(i)==0) cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}
