#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[6]={0};
  for(int i=0,temp;i<n;i++)
  {
    cin>>temp;
    a[temp]++;
  }
  int loc=5,maximum=a[5];
  for(int i=5;i>0;i--)
  {
    if(maximum<=a[i])
    {
      loc=i;
      maximum=a[i];
    }
  }
  cout<<loc<<endl;
  return 0;
}
