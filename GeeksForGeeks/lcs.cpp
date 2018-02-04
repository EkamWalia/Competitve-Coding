// Author : Ekam Walia
#include<bits/stdc++.h>
using namespace std;
int lcs(string s , string t , int  i , int j)
{
  if(i == -1 || j == -1)
    return 0;
  if(s[i] == t[j])
    return 1 + lcs(s , t , i-1 , j-1);
  else
  return max(lcs(s , t , i-1 , j) , lcs(s , t , i , j-1));
}

int main()
{
  string s,t;
  cin>>s;
  cin>>t;

  int  n =s.length() , m = t.length();
  printf("%d\n" , lcs(s , t , n , m , n-1 , m-1));

  return 0;
}
