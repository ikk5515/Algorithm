// BOJ_4153_직각삼각형
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;

        int maxNum = max(a, max(b, c));
        if (maxNum == a) {
            if (a * a == b * b + c * c) cout << "right" << "\n";
            else cout << "wrong" << "\n";
        }
        else if (maxNum == b) {
            if (b * b == a * a + c * c) cout << "right" << "\n";
            else cout << "wrong" << "\n";
        }
        else {
            if (c * c == a * a + b * b) cout << "right" << "\n";
            else cout << "wrong" << "\n";
        }
    }
    return 0;
}