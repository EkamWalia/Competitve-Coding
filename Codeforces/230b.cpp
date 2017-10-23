#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int primes[1000005]={0};
	primes[1]=1;
  for(int i=2;i*i<=1000005;i++)
  {
    if(primes[i] == 0)
    {
      for(int j = 2*i ; j <=1000005; j += i)
      {
        primes[j] = 1;
      }
    }
  }
  int n;
  cin>>n;
  while(n--)
  {
    ll temp;
    cin>>temp;
    ll sq = sqrt(temp);
    cout<<(sq*sq == temp)<<endl;
   if(sq*sq == temp && primes[sq] == 0)
	    printf("YES\n");
    else
	    printf(" NO\n");

  }
  return 0;
}
