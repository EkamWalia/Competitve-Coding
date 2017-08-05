#include <bits/stdc++.h>
using namespace std;
 //Compiler version g++ 4.9

 int main()
 {
   int n;
   cin>>n;
   while(n--)
   {
   	long long int b,w,x,y,z;
   	cin>>b>>w>>x>>y>>z;
   	if(x==y)
   	{
   		cout<<x*(b+w)<<endl;
   		continue;
   	}
   	else if(x>y)
   	{
   	 if(x>=y+z)
   	 {
   		cout<<b*(y+z)+w*y<<endl;
   		continue;
   	 }
   	 else if(x<y+z)
   	 {
   		cout<<x*b+w*y<<endl;
   		continue;
   	 }
   	}
   	else
   	{
   	 if(y>=x+z)
   	 {
   		cout<<b*x+w*(x+z)<<endl;
   		continue;
   	 }
   	 else if(y<x+z)
   	 {
   		cout<<b*x+w*y<<endl;
   		continue;
   	 }
   	 }
   }
   return 0;

}
