#include <bits/stdc++.h>

using namespace std;

const long long modulo = 1000000007;

void sequence(long long a[], int n){
	long long b=1;
	a[0]=0;
	a[1]=b;
	a[2]=b;
	for(int i =3; i<n;i++)
		a[i] = (a[i-1]+a[i-2])%modulo;
	return;
}

int main(){
	int test;
	cin >> test;

	long long x[1000000];
	sequence(x,1000000);

	while(test--){

		long long ans = 0, val=0;
		
		int m,n;
		cin>>m>>n;
		
		int a[m],b[m];
		
		long long bconst = x[n-1];
		long long aconst;
		
		if(n==1)
			aconst = 1;
		else
			aconst = x[n-2];
		
		for(int i = 0; i < m; i++)
		{
			cin>>a[i];
			ans= (ans+aconst*a[i])%modulo;
		}
		
		for(int i = 0; i < m; i++)
		{
			cin>>b[i];
			ans= (ans+bconst*b[i])%modulo;
		}
		
		cout<<(m*ans)%modulo<<"\n";
	
	}
}