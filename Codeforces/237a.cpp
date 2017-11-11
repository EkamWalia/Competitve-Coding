#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);

    vector<pair<int,int> > v;

    for(int i=0,a,b;i<n;i++)
    {
        scanf("%d %d",&a,&b);

        v.push_back(make_pair(a,b));
    }

    int count=1;

    for(int i=0;i<n-1;i++)
    {   
        
        if(v[i].first == v[i+1].first && v[i].second == v[i+1].second)
            count++;
    }

    printf("%d\n",count);
    return 0;
}