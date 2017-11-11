#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        int a[3][3];

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++) 
             cin>>a[i][j];
        } 
        
        int flag1 , flag2;
        int d = 1 , m0 , m1 , m2;
        for(int i=0;i<3;i++)
        {   
            if(a[0][i] >= a[1][i] && a[0][i] >= a[2][i])
            {
                flag2 = 0;

                if(a[0][i] > a[1][i] && a[0][i] > a[2][i])
                    m0 = 1;
            }
            else if(a[1][i] >= a[0][i] && a[1][i] >= a[2][i])
            {
                flag2 = 1;
                if(a[0][i] > a[1][i] && a[0][i] > a[2][i])
                m1 = 1;
            }
            else if(a[2][i] >= a[0][i] && a[2][i] >= a[1][i])
            {
                flag2 = 2;
                if(a[0][i] > a[1][i] && a[0][i] > a[2][i])
                    m2 = 1;
            }                

            if( i==0) flag1 = flag2;
            else if(flag1 != flag2)
            {
                d = 0;
                break;
            }
        }

        d ? printf("yes\n") : printf("no\n");
    }


    return 0;
}