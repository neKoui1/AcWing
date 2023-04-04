#include<iostream>
#include<vector>
using namespace std;

const int N = 10;
int n;
vector<int> path;
int status[10];

void dfs( int cur ) {
    if ( path.size() == n) {
        for (auto it = path.begin(); it != path.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
        return;
    }

    for ( int i = 1 ; i <= n; i++ ) {
        if ( status[i] == 0 ) {
            path.push_back(i);
            status[i] = 1;
            dfs(i+1);
            path.pop_back();
            status[i] = 0;
        }
    }
}

int main() {

    cin >> n;
    for(int i = 0 ; i < 10; i++ ) {
        status[i] = 0;
    }
    dfs(1);

    return 0;
}