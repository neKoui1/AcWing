#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int leftBound(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while( left <= right ) {
        int middle = left + ((right - left) >> 1);
        if ( nums[middle] >= target ) {
            right = middle-1;
        } else {
            left = middle+1;
        }
    }
    return left;
}

int main () {

    vector<int> nums;
    vector<int> dp;
    int n;
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
        int x;
        scanf("%d", &x);
        nums.push_back(x);
    }
    for ( int i = 0; i < n; i++ ) {
        int index = leftBound(dp, nums[i]);
        if ( index < dp.size() ) {
            dp[index] = nums[i];
        } else {
            dp.push_back(nums[i]);
        }
    }
    cout << dp.size() << endl;
    return 0;
}