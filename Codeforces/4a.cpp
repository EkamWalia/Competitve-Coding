#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int n,flag=1;
   scanf("%d",&n);

   for(int i=2;i<=n/2;i+=2)
   {
      if((n-i)%2==0)
      {
         printf("YES\n");
         flag=0;
         break;
      }
   }
   if(flag==1){ printf("NO\n");}
   
   return 0;
}