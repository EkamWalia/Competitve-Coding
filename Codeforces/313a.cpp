#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp1,temp2;
	temp1=n/10;

	temp2=10*(n/100)+n%10;
//    cout<<n/10<<"  "<<n%10<<endl;
	//cout<<n<<"  "<<temp1<<"  "<<temp2<<endl;
	cout<<max(n,max(temp1,temp2))<<endl;
	return 0;
}