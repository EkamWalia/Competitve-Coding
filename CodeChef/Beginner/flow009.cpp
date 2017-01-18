#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int quantity;
    float price;
    scanf("%i %f",&quantity,&price);
    if(quantity>1000) printf("%f\n",(9*quantity*price)/10);
    else printf("%f\n",quantity*price);
  }
  return 0;
 }