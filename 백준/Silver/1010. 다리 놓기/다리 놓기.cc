// BOJ_1010_다리 놓기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int k; cin >> k;

    long long ans = 1;
    int tmp = 1;
    for (int i = 0; i < k; i++) {
        ans = 1;
        tmp = 1;
        int n, r; cin >> r >> n;
        for (int i = n; i > n-r; i--) {
            ans *= i;
            ans /= tmp++;
        }
        cout << ans << "\n";
    }
    return 0;
}