#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  cout<<"Hello before initialization\n";

  int primes[1000001]={0};



  for(int i=2;i<3;i++)
  {
    //cout<<"Hello\n";
    if(primes[i] == 0)
    {
       ll p = primes[i];
       cout<<p<<endl;
      for(int j = 2*p ; j <1000001; j += p)
      {
        cout<<"Inner Loop\n";

        primes[j] = 1;
      }
    }
  }

  vector <ll> v;

  for(int i = 2 ; i*i<1000001; i++)
  {
    if(primes[i] == 0)
    {
      v.push_back(i*i);
    }
  }
  cout<<"enter n\n";
  int n;
  cin>>n;
  cout<<"Enter numbers\n";
  while(n--)
  {
    ll temp;
    cin>>temp;
    int flag = 0;
    for(int i=0,len=v.size() ; i<len;i++)
    {
      if(v[i] == temp)
      {
        flag=1;
        break;
      }
    }

    flag == 0 ? cout<<"NO\n":cout<<"YES\n";

  }
  return 0;
}
