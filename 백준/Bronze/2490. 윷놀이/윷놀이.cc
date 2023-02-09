// BOJ_2490_윷놀이
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int tot = a + b + c + d;
        if (tot == 1) {
            cout << "C" << "\n";
        } else if (tot == 2) {
            cout << "B" << "\n";
        } else if (tot == 3) {
            cout << "A" << "\n";
        } else if (tot == 4) {
            cout << "E" << "\n";
        } else {
            cout << "D" << "\n";
        }
    }
    return 0;
}
// 0 1 1 1 => 도 / 배 1 등 3 / A
// 0 0 1 1 => 개 / 배 2 등 2 / B
// 0 0 0 1 => 걸 / 배 3 등 1 / C 
// 0 0 0 0 => 윷 / 배 4 / D
// 1 1 1 1 => 모 / 등 4 / E