#include<iostream>
#include<vector>
using namespace std;

int LeftBorderBinarySearch(vector<int>& nums, int target) {
    int left = 0 , right = nums.size() - 1;
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

int main() {
    vector<int> a = {1, 2, 2, 3, 3, 4, 6};
    cout << LeftBorderBinarySearch(a, 3) << endl;

    return 0;
}