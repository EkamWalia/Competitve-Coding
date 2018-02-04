// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);

  int a[n];
  for(int i=0;i<n;i++) scanf("%d",&a[i]);

  int sf=0 , here=0;

  for(int i=0;i<n;i++)
  {
      here += a[i];

      if(here < 0)
        here = 0;
      else if(here > sf)
        sf = here;
  }

  printf("%d\n", sf);
  return 0;
}
