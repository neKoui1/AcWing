#include<iostream>
using namespace std;

int main() {
    int sum[100001];
    sum[0] = 0;
    int n = 0 , m = 0 , x = 0;
    cin >> n >> m;
    for ( int i = 1 ; i < n + 1 ; i++ ) {
        cin >> x;
        sum[i] = sum[i-1] + x;
    }
    for ( int i = 0 ; i < m ; i++ ) {
        int l = 0 , r = 0;
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << endl;
    }

    return 0;
}
// 2 3 6 12 16