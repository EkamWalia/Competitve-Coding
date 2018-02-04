// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,n;
  scanf("%d %d",&n,&k);

  int coeff[n+1][k+1]={0};
  for(int i=0;i<n+1;i++)
  {
    for(int j=0;j<k+1;j++)
      coeff[i][j] = 0;
  }
  coeff[0][0] = 1;

  for(int i=1;i<n+1;i++)
  {
    for(int j=0;j<i+1;j++)
    {
      if(j == 0)
        coeff[i][j] = 1;
      else
        coeff[i][j] = coeff[i-1][j-1] + coeff[i-1][j];

    }
  }

  printf("Binomial COefficent of %d and %d is %d\n",n,k,coeff[n][k]);
  return 0;
}
