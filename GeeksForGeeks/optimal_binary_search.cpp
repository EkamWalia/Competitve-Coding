#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[] = {1,2,3,4,5,6,7,8,9};
  int key = 9;
  int n = sizeof(a) / sizeof(a[0]);

  int l = 0 , r = n-1; // r = size of array

  int m;
  while(r-l > 1)
  {
    m = l + (r-l)/2;
    printf("Entry %d %d %d\t",l , m , r );

    if(a[m] <= key) l = m;
    else r = m;

    printf("Exit %d %d %d\n",l , m , r );
  }

  printf("%d\n" , a[l] == key ? l : -1);

  return 0;
}
