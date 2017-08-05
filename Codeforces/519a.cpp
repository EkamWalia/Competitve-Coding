#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[8];
	int count=8,w=0,b=0;
    while(count--)
	{
	cin>>s;
    for(int i=0;i<8;i++)
    { if(s[i]=='.') continue;
      else if(s[i]=='q') b+=9;
      else if (s[i]=='r') b+=5;
      else if (s[i]=='b') b+=3;
      else if (s[i]=='n') b+=3;
      else if (s[i]=='p') b+=1;
      else if (s[i]=='Q') w+=9;
      else if (s[i]=='R') w+=5;
      else if (s[i]=='B') w+=3;
      else if (s[i]=='N') w+=3;
      else if (s[i]=='P') w+=1;
      
    }
}

    if(w>b) cout<<"White\n";
    else if(w<b) cout<<"Black\n";
    else cout<<"Draw\n";
    return 0;

	
}
