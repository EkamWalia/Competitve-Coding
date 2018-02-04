#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;

int factorial(int n)
{
    int f = 1;
    for(int i=2 ; i<=n ; i++) f*=i;

    return f;
}

ll count_palindromes(string s)
{
  int a[26]={0};

  for(int i=0,l = s.length() ; i<l ; i++)
  {
    a[s[i] - 'a'] ++;
  }
  int flag = 0 , maxlen = 0;
  for(int i=0;i<26;i++)
  {
    maxlen += a[i]/2;
    if(a[i] %2) flag++;
  }

  if(flag) maxlen += 1;

  ll count = factorial(maxlen/2);

  for(int i=0;i<26;i++)
  {
    count /= factorial(a[i]/2);
  }

  return flag != 0 ? ((count * flag)%(1000000007)) : (count%(1000000007));
}

int main()
{
  string s;
  cin>>s;

  int q;
  cin>>q;

  while(q--)
  {
      int l,r;
      cin>>l>>r;
      l--;
      string t = s.substr(l,r);

      ll count = count_palindromes(t);
      cout<<count<<endl;
  }

  return 0;
}
