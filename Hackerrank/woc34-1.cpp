#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
  int sum=0;
  while(n!=0)
  {
    sum+=n%10;
    n/=10;
  }

  return sum;
}
int main()
{
  string n;
  cin>>n;

  int one = atoi(s[0]) + atoi(s[1]) + atoi(s[2]);
  int two = stoi(s[3]+s[4]+s[5]);
  int twosum = atoi(s[3]) + atoi(s[4]) + atoi(s[5]);
  do {
    two++;
    twosum = sum(two);
  }while(one != twosum);

  cout<<one<<two<<endl;
  return 0;
}
