#include<iostream>
#include<string>
using namespace std;

int main() {
    string input = "", res = "";
    cin >> input;
    for ( int i = 0 ; i < input.size() - 1 ; i++ ) {
        int cnt1 = input[i] - '0';
        int cnt2 = input[i+1] - '0';
        if ( cnt1 > 10 && cnt2 > 10) {
            res += input[i];
        } else if ( cnt1 > 10 && cnt2 < 10) {
            for ( int j = 0 ; j < cnt2 ; j++ ) {
                res += input[i];
            }
        }
    }

    if ( input[input.size()-1] - '0' > 10 ) {
        res += input[input.size()-1];
    }

    cout << res << endl;


    return 0;
}