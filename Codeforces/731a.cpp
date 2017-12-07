#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int moves=0;
    int a,b=0;

    for(int i=0,n = s.length() ; i<n;i++)
    {
      a = s[i] - 'a';
      int temp = (abs(a-b))%27;
      moves += min(temp , (26-temp));
      b = a;
    }

    printf("%d\n" , moves);
    return 0;
}
