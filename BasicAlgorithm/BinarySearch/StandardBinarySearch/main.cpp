#include<iostream>
using namespace std;

int BinarySearch(int nums[], int size, int target) {
    int left = 0, right = size-1;
    while ( left <= right ) {
        int mid = left + ((right - left) >> 1) ;
        if ( nums[mid] == target ) {
            return mid;
        } else if ( nums[mid] < target ) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main () {
    int a[5] = {1, 3, 7, 8, 10};
    printf("%d", BinarySearch(a, 5, 7));
}