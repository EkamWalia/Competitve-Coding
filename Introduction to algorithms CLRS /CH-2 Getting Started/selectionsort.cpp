//
// Created by ekamwalia on 5/7/17.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int min,temp,index;
    for(int i=0;i<n-1;i++)
    {
        min = a[i];
        index=i;

        for(int j=i+1 ; j<n ; j++)
        {
            if(min > a[j] )
            {
                min = a[j];
                index = j;
            }
        }

        temp = a[i];
        a[i] = min;
        a[index] = temp;
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}

