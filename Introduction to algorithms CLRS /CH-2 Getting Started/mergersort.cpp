#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int merge(int a[], int p, int q, int r)
{

    int  n1 = q-p+1;
    int n2=r-q;

    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i] = a[p+i];
    }

    for(int i=0;i<n2;i++)
    {
        right[i] = a[q+i+1];
    }

    right[n2+1] = 20;
    left[n1+1] = 20;
    int i=0,j=0,k=p;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i];
            i++;
        }
        else
        {
            a[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = right[j];
        j++;
        k++;
    }


}

int mergesort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q = p+(r-p)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];

    mergesort(a,0,n-1);

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}