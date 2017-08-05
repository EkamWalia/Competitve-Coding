#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n; 
  int l[n],r[n],suml=0,sumr=0,index=0,diff=0;
  for(int i=0;i<n;i++)
  {
    cin>>l[i]>>r[i];
    suml+=l[i];
    sumr+=r[i];

    if( abs(l[i]-r[i]) > diff)
    {
      diff = abs(l[i]-r[i]);
      index = i;
    }

    cout<<diff<<" "<<index<<" "<<abs(l[i] - r[i])<<endl;
  }
    int temp =  abs((suml -l[index] + r[index] ) - (sumr + l[index] - r[index]));
    if(temp > abs(suml-sumr))
    {
      cout<<index+1<<endl;
    }
    else
    {
      cout<<"0\n";
    }
  

  return 0;
}
