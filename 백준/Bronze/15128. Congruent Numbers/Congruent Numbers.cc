// BOJ_15128_Congruent Numbers
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long p1, q1, p2, q2; cin >> p1 >> q1 >> p2 >> q2;
    cout << !bool(p1 * p2 % (q1 * q2 * 2));
    return 0;
}