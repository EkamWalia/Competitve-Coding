#include<bits/stdc++.h>
using namespace std;
int main(){

   int apple,pear,lemon;
   cin>>lemon>>pear>>apple;
   int compotes;

  compotes=min(lemon,min(pear/2,apple/4));
  cout<<compotes*7<<endl;
   return 0;
}
