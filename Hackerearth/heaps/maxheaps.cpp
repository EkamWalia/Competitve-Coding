#include<bits/stdc++.h>
using namespace std;

void max_heapify(int a[], int i, int n) {
    int left = 2*i, right = 2*i+1;
    int largest;

    (i<n && a[left] > a[i]) ? largest = left : largest = i;
    (i<n && a[right] > a[largest]) ? largest = right : largest = largest;

    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        max_heapify(a, largest, n);
    }
}

int main() {

    int a[] = {0,8,7,6,3,2,4,5};
    int n = 7;

    for(int i=n/2;i>=1;i--) {
        max_heapify(a,i,n);
    }

    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    return 0;
}
