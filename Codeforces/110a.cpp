#include<bits/stdc++.h>
using namespace std;
 int main()
 {
    int count,n,temp;
    scanf("%d",&n);
    temp =n;

    while(temp!=0)
    {
      if((temp%10==4)||(temp%10==7)) count++;
      temp/=10;
    }


    int flag=0;

    while(count!=0)
    {
      if((count%10==4)||(count%10==7))
      {count/=10;}

      else 
       {
         flag=1;
         break;
       }
    }

    if(flag==1) printf("NO\n");
    else printf("YES\n")
    	return 0;
 }