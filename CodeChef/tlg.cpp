#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int rounds;
	cin>>rounds;
	int scores[rounds],plyr1[rounds],plyr2[rounds];
	int i,j,sum1=0,sum2=0;
	for(i=0;i<rounds;i++)
	   {
	      cin>>plyr1[i]>>plyr2[i]; 
	   }

	for(i=0;i<rounds;i++)
	   { 
	   	 sum1=sum1+plyr1[i];
	   	 sum2=sum2+plyr2[i];
	   	 scores[i]=sum1-sum2;
	   }   

	int max=scores[0],min=scores[0];

	for(i=0;i<rounds;i++)
	   {
	      if(scores[i]>max)  max=scores[i];
	      if(scores[i]<min)  min=scores[i];
	   }

	sum1=abs(max);
	sum2=abs(min);

	if(sum1>sum2) cout<<"1 "<<sum1;
	else cout<<"2 "<<sum2;

	return 0;
}