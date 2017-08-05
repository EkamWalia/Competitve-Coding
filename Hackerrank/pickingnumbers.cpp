#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int flag,temp,j,i,count=1,a[n],b[n],x,y,l;
    for(i=0;i<n;i++) cin>>a[i];
   
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
        {
            temp=abs(a[i]-a[j]);
            if(temp<=1)
                {   b[0]=a[i];b[1]=a[j];
                    x=i,y=j;l=2;
                    break;
                }
        } 
         }
    
    for(i=0;i<n;i++)
    {   flag=1;
        for(j=0;j<l;j++)
        {    if((i!=x)&&(i!=y))
             {  temp=abs(a[i]-b[j]);
                if(temp>1) {flag=0;break;}}

        }
        if(flag==1) {b[j]=a[i];l+=1;}
    } 
    cout<<l;
    
    return 0;
}
