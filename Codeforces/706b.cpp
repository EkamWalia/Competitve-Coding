#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q , n  , shops , a;

  scanf("%d" , &n);
  int x[n];

  for(int i=0;i<n;i++)
  {
    scanf("%d" , &x[i]);
  }
  scanf("%d",&q);

  while(q--)
  {
    scanf("%d" , &a);
    shops = 0;

    int l=0,h=n-1;
    int m;
    while(l <= h)
    {
      m = l + (r-l)/2;

      if(x[m] > a && x[m] <= a)
      {
        break;
      }
      else if(x[m] > a)
      {
        h = m-1;
      }
    }
    printf("%d\n" , shops);
  }
  return 0;
}
