#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int l,int x)
{ int start=0,end=l-1;
  int mid;
  while(start<=end)
  {
    mid=(end+start)/2

    if(a[mid]==x)
    {return mid;}
    else if(a[mid]>x)
    {
      end=mid-1;
    }
    else if(a[mid]<x)
    {
      start=mid+1;
    }
  }
  return -1;
}
int main()
{
  int search,temp,n;
  cin>>n;
  int a[n+1];
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a,a+n+1);
  for(int x=1;x<=n;x++)
  {
    temp=binarysearch(a,n+1,x);
    if(temp==-1) continue;

    search=binarysearch(a,n+1,temp);

    if(search==-1) continue;

    cout<<search<<endl;

  }
  return 0;
}
