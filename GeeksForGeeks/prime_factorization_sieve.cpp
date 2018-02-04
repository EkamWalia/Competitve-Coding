#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[100000]={0};

  a[1] = 1;

  for(int i=2;i<100000; i++)
  {
    if(a[i] == 0)
    {
      for(int j=i ; j<100000 ; j+=i)
      {
        if(a[j] == 0)
          a[j] = i;
      }
    }
  }

  int n;
  scanf("%d",&n);

  vector<int> factors;

  while(n!=1)
  {
    factors.push_back(a[n]);
    n = n/a[n];
  }

  for(int i=0 , n = factors.size() ; i<n; i++)
    printf("%d " , factors[i]);
  printf("\n");

  return 0;
}
