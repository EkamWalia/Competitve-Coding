#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  int maxi;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i == 0) maxi = a[i];
    else maxi = max(a[i],maxi);
  }

  long long int sum=0;

  for(int i=0;i<n;i++)
  {
    sum += (maxi - a[i]);
  }

  cout<<sum<<endl;
  return 0;
}
