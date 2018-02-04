#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {1,2,3,4,5,6,7,8,9};
  int key = 6;
  int l = 0  , r = 8;

  int m;
  while(l<=r)
  {
    m = l + (r-l)/2;

    if(a[m] == key) break;
    else if(a[m] < key) l = m+1;
    else r = m-1;
  }
  if(a[m] != key) m = -1;

  printf("%d\n",m);
  return 0;
}
