#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

char g[5][5], backup[5][5];

int main() {
    
    for ( int i = 0 ; i < 4 ; i ++ ) {
        cin >> g[i];
    }

    for ( int op = 0 ; op < 16; op ++ ) {
        memcpy(backup, g, sizeof g);
        int step = 0;
        for ( int i = 0 ; i < 4; i++ ) {
            
        }
    }



    return 0;
}