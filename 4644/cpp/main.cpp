// #include<iostream>
// #include<cstdio>
// using namespace std;


// int main() {
//     int n = 0;
//     int arr[200001];
//     scanf("%d", &n);
//     for ( int i = 0 ; i < n ; i++ ) {
//         scanf("%d", &arr[i]);
//     }
//     unsigned long long sum = 0;
//     for (int i = 0 ; i < n-1 ; i++ ) {
//         for ( int j = i+1; j < n; j++ ) {
//             sum += arr[i] * arr[j];
//         }
//     }
//     printf("%d\n", sum);
    
//     return 0;
// }
// TLE

#include<iostream>
#include<cstdio>
using namespace std;
using ll = long long;

int main() {
    ll n = 0;
    cin >> n;
    ll sum = 0;
    ll a[n];
    ll ans = 0;

    for ( int i = 0 ; i < n; i++ ) {
        cin >> a[i];
        sum += a[i];
    }
    for ( int i = 0 ; i < n ; i++ ) {
        ans += a[i] * (sum - a[i]);
    }
    cout << ans / 2 << endl;

    return 0;
}