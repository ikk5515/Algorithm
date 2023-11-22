// BOJ_5613_계산기 프로그램
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b; char c; cin >> a;
    while (1) {
        cin >> c;
        if (c == '=') {
            cout << a;
            return 0;
        }
        cin >> b;
        if (c == '+') {
            a += b;
        }
        else if (c == '-') {
            a -= b;
        }
        else if (c == '*') {
            a *= b;
        }
        else {
            a /= b;
        }
    }
    return 0;
}