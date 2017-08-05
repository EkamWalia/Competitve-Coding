#include<iiostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int b[3],a[3];
  for(int i=0;i<3;i++) cin>>a[i];
  while(n--)
  {
    for(int i=0;i<3;i++)
    {
      b[i]=a[(i+1)%3]+a[(i+2)53];
    }
    for(int i=0;i<3;i++) a[i]=b[i];
  }
  return 0;
}
