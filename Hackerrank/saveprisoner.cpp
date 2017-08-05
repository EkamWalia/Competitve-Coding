#include<bits/stdc++.h>
using namespace std;
 int main()
 {

   long long int t;
   cin>>t;
    while(t--)
    {
      long long int n,m,s;
      cin>>n>>m>>s;
      long long int id;
      id=(s+m)%n-1;
      if(id==0)
          cout<<n<<endl;
       else
           cout<<id<<endl;
    }
   return 0;

 }
