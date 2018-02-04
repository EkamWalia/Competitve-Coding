// Author : Captain Thestral Claw
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    scanf("%d\n",&n);

    char a[n][n];
    int b[n][n];

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>>a[i][j];
        b[i][j] = -1;
      }
    }

    int count = 0;

    for(int i=n-1;i>-1;i--)
    {
      int flag = 0,j = n-1;

      while(j > -1)
      {
        if(a[i][j] == '#')
        {
          flag = 1;
          b[i][j] = 0;
        }
        else if(i == n-1)
        {
            if(flag == 0)  count ++ ;
            b[i][j] = 1;
        }
        else
        {
            if(b[i+1][j] == 0)
             b[i][j] = 0;
            else if(flag == 1)
             b[i][j] = 1;
            else
            {
              b[i][j] = 1;
              count ++ ;
            }
        }
        j--;
      }
    }
    printf("%d\n",count);
  }
  return 0;
}
