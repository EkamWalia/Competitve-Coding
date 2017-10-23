#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  scanf("%d",&n);
  int p[n],s[n],pre[n];

  for(int i=0;i<n;i++) scanf("%d",&p[i]);

  for(int i=0;i<n;i++)
  {
    if(i == 0) {s[i] = p[i];pre[i] = 1;}
    else
    {
      s[i] = s[i-1] + p[i];
      pre[i] = s[i-1] + 1;
    }
  }

  //for(int i=0;i<n;i++) printf("%d %d\n",pre[i] , s[i]);

  int m;
  scanf("%d",&m);

  while(m--)
  {
    int temp;
    scanf("%d",&temp);
    int mid;
    int start = 0 , end = n-1;
    while(start <= end)
    {
      mid = start + (end - start) /2;
      //printf("%d %d %d\n" , start , mid , end);
      if( temp >= pre[mid] && temp <= s[mid])
      {
        break;
      }
      else if(temp > s[mid])
      {
        start = mid+1;
      }
      else if(temp < pre[mid])
      {
        end = mid-1;
      }
    }
    printf("%d\n",mid+1);
  }
  return 0;
}
