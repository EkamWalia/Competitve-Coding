#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
   string s;
   cin>>s;
   string sample="hello";
   int n=s.length(),flag=1,j=0;
   
   for(int i=0;i<n;i++)
   {
   	  if(s[i]==sample[j])
   	  {
   	  	 j++;
   	  }
   	  else continue;

   	  if(j==5)
   	  {
   	  	printf("YES");
   	  	flag=0;
   	  	break;
   	  }
   }
   if(flag==1) printf("NO");
   return 0;
}