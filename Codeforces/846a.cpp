#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int count=0,a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int i=0;
  while(a[i]!=1)
  {
    count++;
    i++;
  }
  for(;i<n;i++)
  {
      if(a[i] == 1) count++;
  }

  printf("%d\n",count);
  return 0;
}
