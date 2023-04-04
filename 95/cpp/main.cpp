#include<iostream>
using namespace std;

const int N = 16;
int n;
int status[16];

void backtracking(int u) {
    if (u > n) {
        for ( int i = 1; i <= n ; i++ ){
            if (status[i] == 1 ) {
                cout << i << " ";
            }
        }
        cout << endl;
        return ;
    }

    status[u] = 2;
    backtracking(u+1);
    status[u] = 0;

    status[u] = 1;
    backtracking(u+1);
    status[u] = 0;
}

int main() {

    cin >> n;
    backtracking(1);
    
    return 0;
}