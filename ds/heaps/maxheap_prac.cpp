#include<bits/stdc++.h>
using namespace std;


void heapify(int a[], int i, int size) {

	int largest=i;

	if(2*i <= size && a[2*i] > a[i])
		largest = 2*i;

	if(2*i+1 <= size && a[2*i+1] > a[largest])
		largest = 2*i+1;
	
	if(largest != i) {
		int temp = a[i];
		a[i] = a[largest];
		a[largest] = temp;

		heapify(a, largest, size);
	}

}

int main() {

	int t;
	cin>>t;
	while(t--) {
		
		int q;
		cin>>q;

		int a[q+1];
		int size = 0;
		a[0] = -1;

		while(q--) {

			int op,x;
			cin>>op;

			if(op == 1) {
				cin>>x;

				size++;
				a[size] = x;
				
				//cout<<" Pre heapify Size :"<<size<<endl;
				// for(int i=0;i<size+1;i++) cout<<a[i]<<"  ";
					// cout<<endl;
				if(size >1){
					for(int i=size/2;i>=1;i--)
						heapify(a,i,size);
				}

				// cout<<"post heapify Size :"<<size<<endl;
				// for(int i=0;i<size+1;i++) cout<<a[i]<<"  ";
				// cout<<endl;
				
			} else if(op == 2) {

				if(!size) cout<<"Heap is empty!\n";
				else cout<<a[1]<<endl;
			
			} else {

				if(!size) cout<<"Heap is empty!\n";
				else  {
					int maxi = a[1];
					a[1] = a[size];
					size--;
				
				// cout<<" Pre heapify Size :"<<size<<endl;
				// for(int i=0;i<size+1;i++) cout<<a[i]<<"  ";
					// cout<<endl;
				if(size >1){
					for(int i=size/2;i>=1;i--)
						heapify(a,i,size);
				}

				// cout<<"post heapify Size :"<<size<<endl;
				// for(int i=0;i<size+1;i++) cout<<a[i]<<"  ";
					// cout<<endl;
				
					// cout<<maxi<<endl;
				}

			}

		}
	}

	return 0;
}