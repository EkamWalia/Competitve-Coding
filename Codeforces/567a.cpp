#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(int i=0;i<n;i++)
  {
    if(i == 0)
    {
      printf("%d %d\n" , abs(a[0]-a[1]) , abs(a[0] - a[n-1]));
    }
    else if(i<n-1)
    {
      printf("%d %d\n" , min(a[i+1]-a[i] , a[i] - a[i-1]) , max(a[i] - a[0] , a[n-1] - a[i]));
    }
    else
      printf("%d %d\n" , abs(a[n-1]-a[n-2]) , abs(a[n-1] - a[0]));

  }
  return 0;
}
