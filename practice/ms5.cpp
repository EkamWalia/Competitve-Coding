#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;

	stack<int> s, t;

	for(int i=0,temp ; i<n; i++) {
		cin>>temp;
		s.push(temp);
	}

	int flag = 0;

	int x = n;
	while(n--) {

		int top = s.top();
		s.pop();

		while(!s.empty()) {
			if(s.top() >= top) {
				t.push(s.top());
			} else {
				t.push(top);
				top = s.top();
			}

			s.pop();
		}

		s.push(top);
		while(!t.empty()) {
			s.push(t.top());
			t.pop();
		}
	}


	while(!s.empty()) {
		t.push(s.top());
		s.pop();
	}

	while(!t.empty()) {
		cout<<t.top()<<" ";
		t.pop();
	}
	cout<<endl;
}