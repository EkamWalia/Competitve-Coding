#include<bits/stdc++.h>
using namespace std;
int isLucky(int num)
{
  int flag=0;
  while(num!=0)
  {
    if((num%10==4)||(num%10==7))
      {num/=10;}
    else 
    {
      flag=1;
      break;
    }
  }

  return flag;
}
int main()
{
	int n;
	cin>>n;
    int flag;
    for(int i=4;i<=n;i++)
    {
      flag=isLucky(i);

      if((flag==0)&&(n%i==0))
        {
         printf("YES\n");
         return 0;
        }
    }

    printf("NO\n");
    return 0;
}
