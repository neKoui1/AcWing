#include<iostream>
#include<stack>
using namespace std;

stack<int> s;
int main () {
    int n = 0;
    scanf("%d", &n);
    for ( int i = 0 ; i < n ; i++ ) {
        int x = 0;
        scanf("%d", &x);
        while ( !s.empty() && s.top() >= x) {
            s.pop();
        }
        if ( !s.empty() ) {
            printf("%d ", s.top());
        } else {
            printf("-1 ");
        }
        s.push(x);
    }
    return 0;
}
