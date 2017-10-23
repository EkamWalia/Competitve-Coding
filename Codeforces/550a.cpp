#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f1 = 0,f2 = 0;

    string s;
    cin>>s;

    for(int i=0,len = s.length() ; i<len-1;i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            f1= 1;
            i++;
        
        }
        else if(s[i] == 'B' && s[i+1] == 'A')
        {
            f2 = 1;
            i++;
        }
    }


    if(f1 && f2)
    printf("YES\n");
    else
    printf("NO\n");

    return 0;
}