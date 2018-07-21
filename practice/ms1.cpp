#include<bits/stdc++.h>
using namespace std;

string nameTwoDigits(int n) {

	string prefixes[10] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	string firsts[20] = {"Zero", "One", 
						 "Two", "Three",
						 "Four", "Five",
						 "Six", "Seven",
						 "Eight", "Nine",
						 "Ten", "Eleven",
						 "Twelve", "Thirteen",
						 "Fourteen", "Fifteen",
						 "Sixteen", "Seventeen",
						 "Eighteen", "Nineteen",
						};

	if(n < 20) {
		return firsts[n];
	}

	int tens = n/10;
	int units = n%10;

	string name = prefixes[tens];

	if(units != 0)
		name += (" " + firsts[units]);

	return name;
}

int main() {
	int n;
	cin>>n;

	string words = "";

	if(n >= 1000) {
		int temp = n/1000;
		n %= 1000;

		words = words + nameTwoDigits(temp) + " Thousand ";
	}

	if(n >= 100) {
		int temp = n/100;
		n%=100;
		words = words + nameTwoDigits(temp) + " Hundred ";
	}

	words = words + nameTwoDigits(n) + "\n";

	cout<<words<<endl;
}