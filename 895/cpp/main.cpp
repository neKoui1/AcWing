#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1001;
int n;
int dp[N];
int a[N];

int main () {
    int ans = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        dp[i] = 1;
    }
    for(int i = 1; i < n; i++) {
        for ( int j = 0; j < i; j++ ) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[j]+1, dp[i]);
                ans = max(ans, dp[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}