#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int x,int end)
{ //binary search algorithm for array sorted in increasing order
  int start=0,mid;
  end--;
  while(start<=end)
  {
    mid=start + (end-1)/2;
    if(a[mid]==x) return mid;
    else if(a[mid]>x) end = mid;
    else start = mid;
  }

  return -1;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int x;
  cin>>x;
  int flag=binarysearch(a,x,n);
  cout<<flag<<endl;
  return 0;
}
