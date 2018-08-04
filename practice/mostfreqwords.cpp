#include<bits/stdc++.h>
using namespace std;


int main() {

	list<int> deq;

	int n = 10;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	for(int i=0;i<n;i++) {
		deq.push_back(a[i]);
	}

	for(int i=0;i<n;i++) {
		deq.push_front(i);
	}

	for(auto it = deq.begin(); it!= deq.end(); it++) {
		cout<<*it<<" ";
	}

	cout<<deq.size()<<endl;

	while(!deq.empty()) {
		cout<<deq.front()<<endl;
		deq.pop_front();
	}

	return 0;
}
