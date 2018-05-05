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

    int id;
    long long int score, p,l,c,s;
    int n;
    cin>>n;

    vector<pair<int,int> > heap(6);

    for(int i=0;i<n;i++) {

    }

    return 0;
}
