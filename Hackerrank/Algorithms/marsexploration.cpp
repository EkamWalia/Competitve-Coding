#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   string s;
   cin>>s;
   int n=s.length();
   int count=0;

   for(int i=0;i<n;i++)
   {
      if(i%3==0 && s[i]!='S' ) count++;
      else if(i%3==1 && s[i]!='O') count++;
      else if(i%3==2 && s[i]!='S') count++;
   }

   cout<<count<<endl;
   return 0;
 }
