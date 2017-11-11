#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int count = 0;
    int len = s.length();
    for(int i=0;i<len/2;i++)
    {
        if(s[i] != s[len-1-i])
            count++;
    }

    printf("%s\n", (count == 1) || (count ==0 && len%2 == 1) ?"YES" : "NO");
    return 0;
}