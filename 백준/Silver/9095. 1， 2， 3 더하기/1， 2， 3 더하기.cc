// BOJ_9095_1, 2, 3 더하기
#include <iostream>
using namespace std;

int dp[12];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 7;
    for (int i = 5; i < 11; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    int n; cin >> n;
    for (int i = 0 ; i < n; i++ ) {
        int a; cin >> a;
        cout << dp[a] << "\n";
    }
    return 0;
}