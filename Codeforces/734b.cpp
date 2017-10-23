#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k2,k3,k5,k6;
  scanf("%d %d %d %d" , &k2,&k3,&k5,&k6);
  long long int sum = 0;

  int mini = min(min(k2,k5) , k6);
  k2 -= mini ; k5 -= mini ; k6-= mini;

  sum += (mini * 256);

  mini = min(k2,k3);
  sum += (mini * 32);

  cout<<sum<<endl;
  return 0;
}
