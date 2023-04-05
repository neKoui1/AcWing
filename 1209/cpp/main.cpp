#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

const int N = 1e6+1;
int target;
int cnt;
int res[10];
bool used[10];


// a + b/c = target
// if target - a <= 0 -> continue
void dfs(int u) {
    if ( u == 10 ) {
        for ( int i = 1 ; i < 8 ; i++ ) {
            for ( int j = i+1; j < 9 ; j++ ) {
                int a = 0, b = 0 , c = 0;
                for ( int k = 0 ; k <= i; k++) {
                    a =  a*10 + res[k];
                }
                if ( target - a <= 0 ){
                    break;
                }
                for ( int k = i+1 ; k <= j; k++ ) {
                    b = b*10 + res[k];
                }
                for ( int k = j+1; k < 10 ; k++ ) {
                    c = c*10 + res[k];
                }
                if( a*c + b == target * c ) {
                    cnt++;
                }
            }
        }
        return;
    }

    for ( int i = 1; i < 10 ; i++ ) {
        if ( !used[i] ) {
            res[u] = i;
            used[i] = true;
            dfs(u+1);
            used[i] = false;
            
        }
    }
}

int main() {

    cin >> target;
    dfs(1);
    cout << cnt << endl;

    return 0;
}