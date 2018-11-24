#include<bits/stdc++.h>
using namespace std;

int main() {

	priority_queue<int> pq;

	pq.push(1);
	pq.push(2);
	pq.push(2);
	pq.push(4);
	pq.push(5);
	pq.push(6);

	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;

	priority_queue<int, vector<int>, greater<int> > pq1;

	pq1.push(1);
	pq1.push(2);
	pq1.push(2);
	pq1.push(4);
	pq1.push(5);
	pq1.push(6);

	cout<<pq1.top()<<endl;
	pq1.pop();
	cout<<pq1.top()<<endl;
}