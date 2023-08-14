// BOJ_2720_세탁소 사장 동혁
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int ans[4] = {0, 0, 0, 0};
        int c; cin >> c;
        ans[0] = c / 25;
        c %= 25;
        ans[1] = c / 10;
        c %= 10;
        ans[2] = c / 5;
        c %= 5;
        ans[3] = c;
        for (int i = 0; i < 4; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}