#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int a[4]={0},n=s.length();
   for(int i=0;i<n;i++) 
   {
   	  if(s[i]=='1') a[1]++;
   	  else if(s[i]=='2') a[2]++;
   	  else if(s[i]=='3') a[3]++;

   }
   if(a[3]!=0) n=3;
   else if(a[2]!=0) n=2;
   else n=1;
   for(int i=1;i<=3;i++)
   {
   	 while(a[i]--)
   	 {
   	 	cout<<i;
   	 	if(i==n&&a[i]==0) continue;
   	 	else cout<<"+";
   	 }
   }
   return 0;

}