// BOJ_14470_전자레인지
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int ans = 0;
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    if (a < 0)  {
        cout << -1 * a * c + d + e * b << '\n';
    }
    else if (a > 0) {
        cout << e * (b-a) << '\n';
    }
    else {
        cout << d + e * b << '\n';
    }
    return 0;
}