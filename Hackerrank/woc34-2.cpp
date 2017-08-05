#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;

  vector <int> a,b;
  int temp , maxi;
  for(int i=0;i<n;i++)
  {
     cin>>temp;
     maxi = max(temp , maxi);
     a.push_back(temp);
  }
  for(int i=0;i<n;i++)
  {
     cin>>temp;
     maxi = max(temp , maxi);
     b.push_back(temp);
  }
  sort(a.begin() , a.end());
  sort(b.begin() , b.end());
  int sieve[max+1] ={0};

  int k=0;

  for(int i=1; i< max+1 ; i++)
  {
    for(int j=i ; i<max+1;j+=i)
    {
      k=0;
      while(a[k] <= j)
      {
        if((a[k] == j)
        {
          sieve[i]++;
        }
        k++;
    }
  }
  }

  for(int i=1; i< max+1 ; i++)
  {
    for(int j=i ; i<max+1;j+=i)
    {
      k=0;
      while(b[k] <= j)
      {
        if((b[k] == j)
        {
          sieve[i]++;
        }
        k++;
      }
    }
  }

  gcd = 1;
  for(int i=1;i<max+1;i++)
  {
    if(sieve[i] == 2)
    {
      gcd = sieve[i];
    }
  }

  long long int sum=0;

  for(int i=n-1;i>-1;i--)
  {
    if(a[i] % gcd == 0)
    {
      sum+=a[i];
      break;
    }
  }
  for(int i=n-1;i>-1;i--)
  {
    if(b[i] % gcd == 0)
    {
      sum+=b[i];
      break;
    }
  }
  return 0;
}
