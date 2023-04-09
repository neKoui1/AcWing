#include<iostream>
#include<vector>
using namespace std;

int RightBorderBinarySearch(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while ( left < right ) {
        int mid = left + (( right - left ) >> 1) + 1;
        if ( nums[mid] <= target ) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return nums[right] == target ? right : -1;
}

int main () {
    vector<int> a = {1, 3, 5, 5, 7};
    cout << RightBorderBinarySearch(a, 5) << endl;
    return 0;
}