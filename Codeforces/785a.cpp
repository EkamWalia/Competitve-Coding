#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    
    int f=0;

    while(n--)
    {
        string s;
        cin>>s;
         
        switch(s[0])
        {
            case 'T' : 
                f += 4;
                break;
            case 'C' :
                f += 6;
                break;
            case 'O' : 
                f += 8;
                break;
            case 'D' :
                f += 12;
                break;
            case 'I' :
                f += 20;
                break;
        }
    }

    printf("%d\n" , f);
}