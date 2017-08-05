#include<iostream>
using namespace std;
int main()
{
	 int t,a,count;
	 cin>>t;
	 while(t--)
	   { cin>>a;
	     count=0;
         while(a>=2048) 
            {
              count+=1;a-=2048;
            } 
      while(a>=1024) 
            {
              count+=1;a-=1024;
            } 

      while(a>=512) 
            {
              count+=1;a-=512;
            } 

      while(a>=256) 
            {
              count+=1;a-=256;
            }   

       while(a>=128) 
            {
              count+=1;a-=128;
            } 
       while(a>=64) 
            {
              count+=1;a-=64;
            }     

        while(a>=32) 
            {
              count+=1;a-=32;
            }           

      while(a>=16) 
            {
              count+=1;a-=16;
            }

       while(a>=8) 
            {
              count+=1;a-=8;
            }            

       while(a>=4) 
            {
              count+=1;a-=4;
            }      
        
       while(a>=2) 
            {
              count+=1;a-=2;
            }  

       while(a>=1) 
            {
              count+=1;a-=1;
            }     
        cout<<count<<endl;     
	   }
	 return 0;
}