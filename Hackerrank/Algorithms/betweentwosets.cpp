#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    cout<<"m,n input ok\n";

    int a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"array a input ok\n";

    for(int i=0;i<m;i++) cin>>b[i];
    cout<<"array b input ok\n";
    sort(a,a+n);

    int count=0,x,flag=1;
    x=a[n-1];
    while(1)
    {
      for(int i=0;i<n;i++)
      {
        if(x%a[i]!=0)break;
      }
      for(int i=0;i<m;i++)
      {
        if(b[i]%x!=0) break;
      }

      count++;
      x+=a[n-1];
    }
    cout<<count<<endl;
    return 0;

}
