// BOJ_12756_고급 여관
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d; cin >> a >> b >> c >> d;
    while (b > 0 && d > 0) {
        b -= c;
        d -= a;
    }
    if (b > 0) cout << "PLAYER A";
    else if (d > 0) cout << "PLAYER B";
    else cout << "DRAW";
    return 0;
}