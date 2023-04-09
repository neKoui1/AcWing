#include<iostream>
using namespace std;

int main () {
    double n = 0;
    cin >> n;
    bool flag = false;
    if ( n >= 0 ) {
        flag = true;
    } else {
        n = -n;
    }
    double l = 0 , r = n;
    while ( r - l > 1e-8 ) {
        double mid = ( r + l ) / 2;
        if ( mid * mid * mid >= n ) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if( !flag ) {
        l = -l;
    }
    printf("%lf", l);
    return 0;
}