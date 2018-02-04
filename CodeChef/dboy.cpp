// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  scanf("%d",&t);
  int top = 100000000;
  while(t--)
  {
    int n,ma = -1;
    scanf("%d" , &n);

    int h[n],k[n];

    for(int i=0;i<n;i++)
    {
      scanf("%d",&h[i]);
      ma = max(ma , h[i]);
    }

    for(int i=0;i<n;i++) scanf("%d",&k[i]);

    ma *= 2;
    int val[ma+1];
    val[0] = 0;

    for(int i=1;i<ma+1;i++)
    {
      val[i] = top;
      for(int j=0;j<n;j++)
      {
        if( k[j] <= i && val[i-k[j]] +1 < val[i])
        {
          val[i] = val[i-k[j]] + 1;
        }
      }
    }

      int ans=0;
      for(int i=0;i<n;i++)
      {
        ans += val[2*h[i]];
      }

      printf("%d\n" , ans);
  }
  return 0;
}
