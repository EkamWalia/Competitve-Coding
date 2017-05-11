#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int l[n],r[n],suml=0,sumr=0;
  for(int i=0;i<n;i++)
  {
    cin>>l[i]>>r[i];
    suml+=l[i];
    sumr+=r[i];
  }
  int temp,flag=0,index=0,max;
  max=abs(suml-sumr);
  for(int i=0;i<n;i++)
  {
    temp=abs((suml-l[i]+r[i])-(sumr-r[i]+l[i]));
    if(max<temp)
    {
      index=i;
      flag=1;
      break;
    }
  }

  flag==0?cout<<"0\n":cout<<index+1<<endl;

  return 0;
}
