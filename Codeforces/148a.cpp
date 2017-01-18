#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n;
    cin>>k>>l>>m>>n;
    int d;
	cin>>d;
	int a[d+1]={0};
    
    for(int i=0;i<=d;i+=k)
      a[i]=1;
    for(int i=0;i<=d;i+=l)
      a[i]=1;
    for(int i=0;i<=d;i+=m)
      a[i]=1;
    for(int i=0;i<=d;i+=n)
      a[i]=1;

    int count=0;
    for(int i=1;i<=d;i++) 
    {
       if(a[i]==1) count++;
    }

    cout<<count<<endl;
    return 0;
}