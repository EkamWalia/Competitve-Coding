#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;

int main()
{

  int t;
  cin>>t;
  for(int j = 0 ; j < t ; j++)
  {
    int n;
    cin>>n;

    int sum = 0;

    for(int i=0;i<n;i++)
    {
      cout<"next \n";
      int temp ;
      cin>>temp;

      while(temp != 0)
      {
        sum += temp%10;
        temp = temp/10;
      }
    }


    sum % 3 == 0? cout<<"Yes\n" : cout<<"No\n";
  }

  return 0;
}
