#include <bits/stdc++.h>
using namespace std;
 //Compiler version g++ 4.9

 int main()
 {
   int n;
   cin>>n;
   vector <int> a(n);
   vector <int> b(101);

   int temp;
   for(int i=0;i<n;i++)
   {
     cin>>temp;
     b[temp]++;
   }
   int del=0;
   int max= *max_element(b.begin(),b.end());
   for(int i=0;i<=101;i++)
   {
   		del+=b[i];
   }
   cout<<del-max<<endl;
   return 0;

}
