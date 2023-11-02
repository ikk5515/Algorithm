// BOJ_1703_생장점
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, a, b, ans;
    while (true) {
        cin >> n;
        if (n == 0) break;
        ans = 1;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            ans *= a;
            ans -= b;
        }
        cout << ans << "\n";
    }
    return 0;
}