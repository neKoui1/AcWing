#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& nums, int target, bool isLeft) {
    int left = 0, right = nums.size() - 1;
    int res = -1;
    while ( left <= right ) {
        int middle = left + ( (right - left) >> 1);
        if ( nums[middle] > target ) {
            right = middle - 1;
        } else if ( nums[middle] < target ) {
            left = middle + 1;
        } else {
            res = middle;
            if ( isLeft ) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
    } 
    return res;
}

int main () {
    vector<int> nums = {1, 2, 3, 3, 3, 4, 5, 7};
    cout << BinarySearch(nums, 3, true) << " " << BinarySearch(nums, 3, false) << endl;
    cout << BinarySearch(nums, 6, true) << endl;
    
    return 0;
}