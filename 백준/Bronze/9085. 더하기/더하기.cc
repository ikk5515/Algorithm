// BOJ_9085_더하기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int ans = 0;
        while (N--) {
            int a; cin >> a;
            ans += a;
        }
        cout << ans << "\n";
    }
    return 0;
}