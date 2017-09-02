#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1,count=0,height=0;

	while(count<=n)
	{
		count+=(1+i)*i/2;
        height+=1;
        i++;

    }

    cout<<height-1<<endl;
	return 0;
} 
