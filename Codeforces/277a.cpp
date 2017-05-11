#include<bits/stdc++.h>
using namespace std;
 int main(){

   int year;

   int temp,flag=0;
   cin>>year;
   while(1)
   {
     int a[10]={0};
     flag=0;
     year++;
     temp=year;
     while(temp!=0)
     {
       a[temp%10]++;
       temp/=10;
     }

     for(int i=0;i<10;i++)
     {
       if(a[i]>1){flag=1;break;}
     }
     if(flag==0)
     {
       cout<<year<<endl;
       return 0;
     }

   }



   return 0;

 }
