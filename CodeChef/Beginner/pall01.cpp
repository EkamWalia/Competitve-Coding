#include<iostream>
using namespace std;
int main()
{
	int t,num,rev,temp;
	cin>>t;
	while(t--)
    { rev=0;
      cin>>num;
      temp=num;
      while(temp!=0)
      {
      	 rev=(rev*10)+(temp%10);
      	 temp/=10;
      } 
      if(rev==num) cout<<"wins\n";
      else cout<<"losses\n";
 	}
 	return 0;
}