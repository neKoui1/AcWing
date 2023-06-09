#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 310;
int dp[N][N];
int nums[N];
int n;

int main () {
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) {
        scanf("%d", &nums[i]);
        nums[i] += nums[i-1];
    }
    memset(dp, 0x3f, sizeof(dp));
    for ( int i = 1; i <= n; i++ ) {
        dp[i][i] = 0;
    }
    
    for ( int l = 2; l <= n; l++ ) {
        for ( int i = 1; i + l - 1 <= n; i++ ) {
            int j = i + l - 1;
            for ( int k = i; k < j; k++ ) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + nums[j] - nums[i-1]);
            }
        }
    }
    cout << dp[1][n] << endl;

    return 0;
    
}