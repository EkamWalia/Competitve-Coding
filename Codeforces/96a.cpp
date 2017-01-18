#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=1,length=s.length();
    for(int i=0;i<length;i++) 
    {
       if(s[i]==s[i+1]) 
       {
          count+=1;
          if(count>=7) 
          {
             printf("YES");
             break;
          }
       }
       else 
       count=1;
    }
    if(count<7) printf("NO");
    return 0;
}