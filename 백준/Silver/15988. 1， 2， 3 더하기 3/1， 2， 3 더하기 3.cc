// BOJ_15998_1, 2, 3 더하기 3
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int T; cin >> T;
    long long dp[1000010] = {0, };
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 0; i < T; i++) {
        int n; cin >> n;
        for (int i = 3; i <= n; i++) {    
            if (i > 2) {
                dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000009;
            }
        }
        cout << dp[n] << "\n";
    }
    return 0;
}