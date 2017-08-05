#include<iostream>
using namespace std;
int numsqr(int x)
{
	static int count=0;
    if(x<4) return 0;
	else if(x==4) return 1;
	else count=((x/2)-1)+numsqr(x-4);
	return count;
}
int main()
{
	 int t,n;
	 cin>>t;
	 while(t--) 
	 {  
        cin>>n;
        cout<<numsqr(n)<<endl;
	 }
	 return 0;
}