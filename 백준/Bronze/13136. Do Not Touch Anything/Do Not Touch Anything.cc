// BOJ_13136_Do Not Touch Anything
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long r, c, n, x, y; cin >> r >> c >> n;
    if (r % n) {
        x = r / n +1;
    } else {
        x = r / n;
    }

    if (c % n) {
        y = c / n + 1;
    } else {
        y = c / n;
    }
    cout << x * y;
    return 0;
}