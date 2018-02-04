// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];

  for(int i=0;i<n;i++) scanf("%d",&a[i]);

  int i,j,k,l;
  int s=0,sofar=0,here=0;

  for(int x = 1; x<n ; x++)
  {
      here += a[x];
      if(here <= 0)
      {
        here = 0;
        s = x+1;
      }
      else if(here > sofar)
      {
        sofar = here;
        k = s;
        l = x;
      }
  }

  here = 0;
  s = 0;
  for(int x = 0 ; x<k;x++)
  {
    here += a[x];

    if(here > 0)
    {
      here = 0;
      s = x+1;
    }
    else if(here < sofar)
    {
      sofar = here;
      i = s;
      j = x;
    }
  }

  if(here == 0)
  {
    int min = a[0];
    int ind = 0;
    for(int x = 1; x<k;x++)
    {
      if(a[x] < min)
      {
        ind = x;
        min = a[x];
      }
    }
    i = j = ind;
  }

  printf("%d %d %d %d\n",i,j,k,l);
  return 0;
}
