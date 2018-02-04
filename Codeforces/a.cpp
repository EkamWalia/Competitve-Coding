#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int n;
  scanf("%d",&n);

  int pos=0 , nev=0;

  while(n--)
  {
    int x , y;
    scanf("%d %d" , &x , &y);

    x > 0 ? pos++ : nev++;

  }

  if(pos == 1 || nev == 1 || pos == 0 || nev == 0) printf("YES\n");
  else printf("NO\n");
  return 0;
}
