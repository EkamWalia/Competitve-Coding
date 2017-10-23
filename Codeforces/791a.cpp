#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  scanf("%d %d" , &a,&b);
  int c = 0;

  while(a<=b)
  {
    c++;
    a*=3;
    b*=2;
  }

  printf("%d\n" , c);
  return 0;
}
