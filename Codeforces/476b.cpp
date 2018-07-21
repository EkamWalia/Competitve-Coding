#include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
	int fact = 1;
	for(int i=1;i<=n;i++)
		fact *= i;
	return fact;
}
int main() {
	string s,t;

	cin>>s>>t;

	int mp=0, mm=0;
	int cp=0, cm=0, cq=0;

	for(char c : s) {
		if(c == '+')
			mp++;
		else
			mm++;
	}

	for(char c : t) {
		if(c == '+')
			cp++;
	    else if(c == '-')
	    	cm++;
	    else
	    	cq++;

	}

	if(cp > mp || cm > mm) {
		cout<<(double)0<<endl;
		return 0;
	}
	if(cp == mp && cm == mm) {
		cout<<(double)1<<endl;
		return 0;
	}

	//cout<<mp<<"  "<<cp<<endl;
	//cout<<mm<<"  "<<cm<<endl;
	//cout<<cq<<endl;
	double total = pow(2,cq);

	double fac_q = factorial(cq);
	double fac_p = factorial(mp - cp);
	double fac_m = factorial(mm - cm);

	//cout<<total<<"  "<<fac_q<<endl;
	//cout<<fac_m<<"  "<<fac_p<<endl;
	if(fac_p == 0 || fac_m == 0)
		printf("%0.12f\n",((fac_q)/total));
	else
		printf("%0.12f\n",((fac_q / (fac_p * fac_m))/total));

	return 0;
}