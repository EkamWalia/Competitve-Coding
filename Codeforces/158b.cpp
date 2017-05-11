#include<iostream>
using namespace std;
int main()
{
  int n,temp,sum;
  cin>>n;
  int a[5]={0};
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    a[temp]++;
  }

  sum=a[4]+min(a[3],a[1])+a[2]/2;
  a[2]=a[2]%2;
  temp=min(a[1],a[3]);
  a[1]-=temp;
  a[3]-=temp;

  sum+=a[3]+min(2*a[1],a[2]);
  temp=min(2*a[1],a[2]);
  a[1]-=temp;
  a[2]-=temp;

  sum+=a[2]+a[1]/4+(a[1]%4)/3 +(a[1]%4)/3/2;
  cout<<sum<<endl;

  return 0;
}
