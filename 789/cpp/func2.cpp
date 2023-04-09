// func2
// 通过一个函数就能找出左右边界
#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& nums, int target, bool isLeft) {
    int res = -1;
    int left = 0, right = nums.size() - 1;
    while ( left <= right ) {
        int mid = (left + right) >> 1;
        if (nums[mid] > target) {
            right = mid - 1;
        } else if ( nums[mid] < target ) {
            left = mid + 1;
        } else {
            res = mid;
            if (isLeft) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
    return res;
}

int main () {
    vector<int> nums;
    int n, q, k;
    cin >> n >> q;
    for ( int i = 0 ; i < n ; i++ ) {
        int x;
        scanf("%d", &x);
        nums.push_back(x);
    }
    while( q-- ) {
        cin >> k;
        cout << BinarySearch(nums, k, true) << " " << BinarySearch(nums, k, false) << endl;
    }
    return 0;
}