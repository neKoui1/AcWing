#include<iostream>
#include<cstdio>
using namespace std;

const int N = 1e6+10;
int a[N];
int n = 0;

void quickSort(int a[], int l, int r) {
    if( l >= r) {
        return;
    }
    int x = a[(l+r)/2], i = l-1, j = r+1;
    while( i < j) {
        do i++; while(a[i] < x);
        do j--; while(a[j] > x);
        if ( i < j) {
            swap(a[i], a[j]);
        }
    }
    quickSort(a, l, j);
    quickSort(a, j+1, r);
}

int main() {
    scanf("%d", &n);
    for ( int i = 0 ; i < n ; i ++ ) {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n-1);
    for ( int i = 0 ; i < n ; i ++ ) {
        printf("%d ", a[i]);
    }
}