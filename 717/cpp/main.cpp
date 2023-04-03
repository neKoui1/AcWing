#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    if (n==1) {
        cout << 0 << " ";
    } else if (n == 2) {
        cout << 0 << " " << 1 << " ";
    } else {
        int prePre = 0;
        int pre = 1;
        for (int i = 1; i <= n; i++) {
            cout << prePre << " ";
            int temp = pre;
            pre = pre + prePre;
            prePre = temp;
        }
    }

    return 0;
}