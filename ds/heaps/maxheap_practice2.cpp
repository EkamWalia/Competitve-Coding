#include<bits/stdc++.h>
using namespace std;


void max_heapify(vector<int>& heap, int n, int i) {
	int left, right, largest=i;
	left = 2*i;
	right = 2*i + 1;

	if(right < n+1 && heap[right] > heap[i] )
		largest = right;

	if(left < n+1 && heap[left] > heap[largest])
		largest = left;

	if(largest != i) {

		int temp = heap[i];
		heap[i] = heap[largest];
		heap[largest] = temp;

		max_heapify(heap, n, largest);
	}
}

int pop_max(vector<int>& heap, int n) {
	int max = heap[1];

	heap[1] = heap[n];

	max_heapify(heap, n-1, 1);

	return max;
}

int main() {

	int n;
	cin>>n;

	vector<int> heap;
	heap.push_back(0);

	for(int i=1, temp;i<n+1;i++) {

		cin>>temp;
		heap.push_back(temp);
	} 


	cout<<"max_heapifying\n";

	for(int i=n/2;i>0;i--) {
		cout<<"Heapifying node "<<i<<endl;
		max_heapify(heap, n, i);
	}


	for(int i=1;i<n+1;i++) cout<<heap[i];
	cout<<endl;

	cout<<"Deleting ";

	int max = pop_max(heap, n);
	n--;

	cout<<"max = "<<max<<endl;
		for(int i=1;i<n+1;i++) cout<<heap[i];
	cout<<endl;
	
	return 0;
}