#include<iostream>
using namespace std;
int main()
{ int a[3],b[3],x,y,i,i;
  for(i=0;i<=2;i++)
      {cin>>a[i];}


  for(i=0;i<=2;i++)
      { cin>>b[i];}
  for(i=0;i<=2;i++)
      { if(a[i]>b[i]) x++;
        if(a[i]<b[i]) y++;
      }

   cout<<x<<" "<<y;
   return 0;
}
