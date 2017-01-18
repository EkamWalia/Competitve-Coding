#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
    long long int time=0,next,present=1;
	while(m--)
	{
	  cin>>next;
	  
	  if(next<present)
        time+=(n-present)+next;
      if(next>present)
        time+=next-present;
      
      present=next;

	}

	cout<<time<<endl;
	return 0;
}
