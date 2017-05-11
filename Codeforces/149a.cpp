#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k;
  cin>>k;
  int a[13];
  a[0]=0;
  for(int i=1;i<13;i++) cin>>a[i];
  sort(a,a+13);
  int sum=0,count=0;
  int i=12;
  while(sum<k)
  {
    if(i==0)
    {
      cout<<"-1\n";
      return 0;
    }
    sum+=a[i];
    count++;
    i--;

  }
  cout<<count<<endl;
  return 0;

}
