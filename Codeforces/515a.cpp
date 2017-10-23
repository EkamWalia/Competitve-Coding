#include<bi ts/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    scanf("%d %d %d",&a,&b,&s);

    if(s < abs(a) + abs(b)) 
    {
        printf("No\n");
    }
    else if(s == abs(a) + abs(b))
    {
        printf("Yes\n");
    }
    else
    {
        if((s-(abs(a)+abs(b))) % 2 == 0)
            printf("Yes\n");
        else 
            printf("No\n");
    }
    return 0;
}