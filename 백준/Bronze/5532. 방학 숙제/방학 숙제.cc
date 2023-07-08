// BOJ_5532_방학 숙제
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int l, a, b, c, d; cin >> l >> a >> b >> c >> d;
    int ans, res;
    ans = a / c;
    a %= c;
    if (a > 0) {
        ans++;
    }
    res = b / d;
    b %= d;
    if (b > 0) {
        res++;
    }
    cout << (ans > res ? l - ans : l - res);
    return 0;
}