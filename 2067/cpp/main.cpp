#include<iostream>
using namespace std;

int main() {
    int dp[31][31];
    int n = 0, m = 0;
    cin >> n >> m;
    for ( int i = 1 ; i < n ; i++ ) {
        dp[i][0] = 1;
    }
    for ( int j = 1 ; j < m ; j++ ) {
        dp[0][j] = 1;
    }
    for ( int i = 1 ; i < n ; i++ ) {
        for ( int j = 1 ; j < m; j++ ) {
            if ( (i+1) % 2 == 0 && (j+1) % 2 == 0 ) {
                dp[i][j] = 0;
                continue;
            } else {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
    }
    cout << dp[n-1][m-1] << endl;
    return 0;
}