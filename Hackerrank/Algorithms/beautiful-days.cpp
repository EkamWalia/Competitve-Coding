#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{ int rev=0;
  while(n!=0)
  {
    rev=rev*10 + n%10;
    n/=10;
  }
  
  return rev;
}
 int main()
 {
   int i,j,k,count=0;
   cin>>i>>j>>k;
   for(int a=i;i<=j;i++)
   {
     int temp=reverse(a);
     if(abs(temp,a)%k==0) count++;
   }
   cout<<count<<endl;
   return 0;
 }
