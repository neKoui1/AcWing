#include<iostream>
#include<algorithm>

using namespace std;

const int N = 510;
int nums[N][N];
int dp[N][N];
const int INF = 0x3f3f3f3f;
int n;

int main () {
    scanf("%d", &n);
    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 1; j <= i; j++ ) {
            scanf("%d", &nums[i][j]);
        }
    }
    for ( int i = 0; i <= n; i++ ) {
        for ( int j = 0; j <= n; j++ ) {
            dp[i][j] = -INF;
        }
    }
    dp[1][1] = nums[1][1];

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = 0; j <= i; j++ ) {
            dp[i][j] = max(dp[i][j], max(dp[i-1][j]+nums[i][j], dp[i-1][j-1]+nums[i][j]));
        }
    }
    int ans = -INF;
    for ( int j = 1; j <= n; j++ ) {
        ans = max(ans, dp[n][j]);
    }
    cout << ans << endl;

    return 0;
}