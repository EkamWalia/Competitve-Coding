#include<bits/stdc++.h>
using namespace std;
int CheckFunction(string s)
{
    int temp;
    int n=s.length();
    int a[10]={0};
    for(int i=0;i<n;i++)
    {
        temp=s[i]-'0';
        a[temp]++;
    }
    int sum=0;
    for(int i=0;i<10;i++)
    {
        if(i==0 || i==6 || i==9) sum+=a[i]*6;
        else if(i==1) sum+=a[i]*2;
        else if(i==2 || i==3 || i==5) sum+=a[i]*5;
        else if(i==4) sum+=a[i]*4;
        else if(i==8) sum+=a[i]*7;
        else if(i==7) sum+=a[i]*3;
    }
    return sum;
}
int main()
{
    string s;
    cin>>s;
    int x=CheckFunction(s);
    cout<<x<<endl;
    return 0;
}
    
