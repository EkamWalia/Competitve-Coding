#include<iostream>
using namespace std;
int main()
{
	int t,n,digit,sum;
	cin>>t;
	while(t--)
	{
      cin>>n;
      sum=0;
      while(n>0)
         {
            digit=n%10;
            sum+=digit;
            n/=10;
         }
        cout<<sum<<endl; 
	}
 return 0;

}