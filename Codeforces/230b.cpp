#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int primes[1000005]={0};


	primes[1]=1;
  for(int i=2;i*i<1000005;i++)
  {
    //cout<<"Hello\n";
    if(primes[i] == 0)
    {
      for(int j = 2*i ; j <1000005; j += i)
      {
        primes[j] = 1;
      }
    }
  }
vector <long long int> v;
for(int i=0;i<1000005;i++)
{
	if(primes[i] == 0)
		v.push_back(i*i);
}
  int n;
  cin>>n;
  while(n--)
  {
    ll temp;
    cin>>temp;
    int flag=0;
    for(int i=0,n=v.size(); i<n;i++)
    {
	    if(v[i] == temp)
		{
			flag=1;
			break;
		}
    }
//	int sq = sqrt(temp);
   if(flag == 1)
	    printf("YES\n");
    else
	    printf("NO\n");

  }
  return 0;
}
