#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int n;
int m;
vector<int> path;
bool used[26];

void dfs(int u) {

    if (path.size() == m) {
        for (auto it = path.begin(); it != path.end() ; it++ ) {
            cout << *it << " ";
        }
        puts("");
        return;
    }

    for ( int i = u ; i <= n ; i++ ) {
        if ( !used[i] ) {
            path.push_back(i);
            used[i] = true;
            dfs(i+1);
            path.pop_back();
            used[i] = false;
        }
    }


}

int main() {

    cin >> n >> m;
    dfs(1);

    return 0;
}