#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int i=3;
    while(1)
    {
      int temp=(i-2)*180;
      //cout<<i*n<<"  "<<temp<<endl;
      if(i*n==temp)
      {
        cout<<"YES\n";
        break;
      }
      else if(i*n<temp)
      {
        cout<<"NO\n";
        break;
      }
      i++;
    }
  }
    return 0;
}
