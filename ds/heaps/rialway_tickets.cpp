#include<bits/stdc++.h>
using namespace std;

int main() {

	int n,m;
	cin>>n>>m;
	priority_queue<int> pq;
	
	for(int i=0, temp;i<n;i++) {
		cin>>temp;
		pq.push(temp);
	} 

	int price = 0;
	while(m != 0) {
		int highest = pq.top(); 
		pq.pop();
		int top = pq.top();
		int sell = min(highest-top + 1, m);

		price += (sell * (highest + (highest - sell + 1)))/2;

		highest -= sell;
		pq.push(highest);
		m -= sell;
	}

	cout<<price<<endl;
	return 0;
}