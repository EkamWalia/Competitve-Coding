#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        int n;
        string a;
        cin>>a;

        n = a.length();
        int l=0 , m=0;
        stack<char> s;

        for(int i=0;i<n;i++)
        {   
            if(s.empty() && a[i] == '>')
            {
                break;
            }
            else if(a[i] == '<')
            {
                s.push(a[i]);
            }
            else
            {
                l+=2;
                s.pop();
            }

        }
        printf("%d\n" , l);
    }
    return 0;
}