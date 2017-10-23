#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

    vector<pair<int,int> > v;

    for(int i=0,n1,n2 ; i<n;i++)
    {
        scanf("%d %d" , &n1 , &n2);

        v.push_back(make_pair(n1,n2));
    }

    sort(v.begin() , v.end());

    int temp ;
    int flag = 0;
    temp = v[0].second;
    for(int i=0;i<n;i++)
    {
        if(v[i].second < temp)
        {
            flag=1;
            break;
        }

        temp = v[i].second;
    }

    if(!`flag)
        printf("Poor Alex\n");
    else
        printf("Happy Alex\n");
    return 0;
}