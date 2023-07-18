// BOJ_4299_AFC 윔블던
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x, y, a, b; cin >> x >> y;
    a = (x + y) / 2;
    b = (x - y) / 2;
    if ((x + y) % 2 != 0 || (x - y) % 2 != 0) {
        cout << -1;
    }
    else {
        if (a >= 0 && b >= 0) {
            if (a >= b) {
                cout << a << ' ' << b;
            }
            else {
                cout << b << ' ' << a;
            }
        }
        else {
            cout << -1;
        }
    }
    return 0;
}
