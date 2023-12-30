// BOJ_6502_동혁 피자
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int r, w, l, cnt = 1;
    while (1) {
        cin >> r;
        if (r == 0) break;
        cin >> w >> l;
        cout << "Pizza " << cnt++ << " ";
        if (pow(w, 2) + pow(l, 2) <= pow(r, 2) * 4) cout << "fits on the table." << "\n";
        else cout << "does not fit on the table." << "\n";
    }
}