// BOJ_2999_비밀 이메일
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int len = str.length();
    int r = 0, c = 0;
    for (int i = 1; i <= sqrt(len); i++) {
        if (len % i == 0) {
            r = i;
            c = len / i;
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = i; j < len; j += r) {
            cout << str[j];
        }
    }
    return 0;
}