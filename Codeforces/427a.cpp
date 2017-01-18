#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int officer=0,crime=0,untreated=0,temp;
	while(n--)
	{   crime=0;
		cin>>temp;

		if(temp<0)
			crime++;
		else if(temp>0)
		    officer+=temp;
        if(crime==1 && officer>0)
        {
        	 officer--;
        	 crime=0;
        }
		
	   untreated+=crime;
	}
    cout<<untreated<<endl;
    return 0; 
}