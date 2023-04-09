// func 1
// Use 2 functions to find left & right border
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

const int N = 1e5 + 10;
int n = 0;
int q = 0;
int k = 0;

int LeftBorderBinarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while ( left < right ) {
        int mid = left + ((right - left) >> 1);
        if ( nums[mid] >= target ) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return nums[left] == target ? left : -1;
}

int RightBorderBinarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while ( left < right ) {
        int mid = left + ( (right - left) >> 1 ) + 1;
        if ( nums[mid] <= target ) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return nums[right] == target ? right : -1;
}

int main () {
    vector<int> nums;
    cin >> n >> q;
    for ( int i = 0 ; i < n ; i++ ) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    while ( q-- ) {
        cin >> k;
        cout << LeftBorderBinarySearch(nums, k) << " " << RightBorderBinarySearch(nums, k) << endl;
    }

    return 0;
}