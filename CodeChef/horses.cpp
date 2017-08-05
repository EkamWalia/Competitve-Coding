#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
	
	int t,n,s[5000];
	cin>>t;
	while (t--)
	{
	 cin>>n;
	 for(int i=0;i<n;i++)
	  {
	    cin>>s[i];
	  }
     int temp,diff=abs(s[0]-s[1]);

     for(int i=0;i<n;i++)
      {  
         for(int j=0;j<n;j++)
          {
            temp=abs(s[i]-s[j]);
            if((temp<diff)&&(i!=j))  diff=temp;
          }
      }

      cout<<temp<<endl;
    }
	return 0;
}