// BOJ_12871_무한 문자열
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str1, str2; cin >> str1 >> str2;

    string st1, st2;
    for (int i = 0; i < str2.size(); i++) {
        st1 += str1;
    }

    for (int i = 0; i < str1.size(); i++) {
        st2 += str2;
    }
    if (st1 == st2) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}