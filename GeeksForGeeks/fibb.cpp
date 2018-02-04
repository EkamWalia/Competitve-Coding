// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;

int fib(int i , int fibbi[])
{
  if(fibbi[i] == -1)
  {
      if(i == 0 || i == 1) fibbi[i] = i;
      else
      fibbi[i] = fib(i-1 , fibbi) + fib(i-2 , fibbi);

      printf("%d %d\n" , i , fibbi[i]);
  }

  return fibbi[i];
}

int main()
{
  int n;
  scanf("%d",&n);

  int fibbi[n+1];
  memset(fibbi , -1 , (n+1)*sizeof(fibbi[0]));

  printf("%d Fibbiionacci number is %d\n" , n , fib(n,fibbi));
  return 0;
}
