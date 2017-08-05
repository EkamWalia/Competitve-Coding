#include<iostream>
using namespace std;
int main()
{int a,b;
 cin>>a>>b;
 int n=a-b;
 if(n%10==9) n=n-1;
 else n=n+1;
 cout<<n;
 return 0;
}
