// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d" , &t);
  while(t--)
  {
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      if(a[i] > 0) a[i] = 1;
      else a[i] = -1;
      b[i] = 1;
    }

    for(int i=n-2;i>-1;i--)
    {
      if(a[i] * a[i+1] < 0)
      {
        b[i] = b[i+1] + 1;
      }
    }

    for(int i=0;i<n;i++) printf("%d ",b[i]);
    printf("\n");
  }
  return 0;
}
