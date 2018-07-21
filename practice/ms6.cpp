#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* zigzagList(Node* head) {

}

Node* insertTail(Node* head, int x) {

	if(!head) {
		head = new Node();
		head->data = x;
		head->next= nullptr;
		return head;
	}

	Node* iter = head;

	while(iter->next) {
		iter = iter->next;
	}

	Node* temp = new Node();
	temp->data = x;
	temp->next= nullptr;
	
	iter->next = temp;

	return head;  
}

void showList(Node* head) {

	while(head) {
		cout<<head->data<<" ";
		head = head->next;
	}

	cout<<endl;
}

int main() {

	Node* head = nullptr;

	int n;
	cin>>n;

	int temp;
	for(int i=0;i<n;i++) {
		cin>>temp;

		head = insertTail(head, temp);
	}

	head = zigzagList(head);

	showList(head);

	return 0;
}