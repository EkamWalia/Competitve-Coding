#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
    int x,y,z;
    for(int i=0;i<n;i++)
    { 
     	x=a[i]%2;y=a[i+1]%2;z=a[i+2]%2;
     	if(x==y && y==z) continue;
     	else if(x==y) {cout<<i+3<<endl;break;}
     	else if(x==z) {cout<<i+2<<endl;break;}
     	else if(y==z) {cout<<i+1<<endl;break;}
    } 
	return 0;
}