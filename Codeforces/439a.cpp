#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,d;
  scanf("%d %d",&n,&d);

  int a[n];
  int sum=0;

  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum += a[i];
  }

  sum += (n-1)*10;
  if(sum <= d) printf("%d\n" , (2*(n-1) + (d-sum)/5));
  else printf("-1\n");
  return 0;
}
