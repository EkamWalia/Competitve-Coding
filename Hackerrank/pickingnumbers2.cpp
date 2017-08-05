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
    int temp1,temp2,j,a[n],i;
    for(i=0;i<n;i++) cin>>a[i];
    
    for(i=0;i<n-1;i++)
     {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp1=a[j];
                a[j]=a[j+1];
                a[j+1]=temp1;
            }
        }
     }
    int count=1;
    i=0;
    while(i<n)
    {
        temp1=abs(a[i]-a[i+1]);
        temp2=(i==0)?0:abs(a[i-1]-a[i+1]);
        if((temp1<=1)&&(temp2<=1)) count+=1;
        i++;
    } 
 
   
    cout<<count;
    
    return 0;
}
