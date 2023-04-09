#include<iostream>
using namespace std;

const int N = 1e5+10;
int n = 0;
int k = 0;
int a[N];

void QuickSort(int a[], int l, int r) {
    if ( l >= r ) {
        return;
    }
    int key = a[(l+r) >> 1];
    int i = l-1;
    int j = r+1;
    while ( i < j ) {
        do i++; while(a[i] < key);
        do j--; while(a[j] > key);
        if (i<j) {
            swap(a[i], a[j]);
        }
    }
    QuickSort(a, l, j);
    QuickSort(a, j+1, r);
}

int main() {
    scanf("%d",&n);
    scanf("%d", &k);
    for ( int i = 0; i < n ; i++ ) {
        scanf("%d", &a[i]);
    }
    QuickSort(a, 0 , n - 1);
    printf("%d\n", a[k-1]);
}