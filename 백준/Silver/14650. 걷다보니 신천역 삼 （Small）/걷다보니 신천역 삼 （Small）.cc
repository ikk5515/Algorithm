// BOJ_14650_걷다보니 신천역 삼 (Small)
#include <iostream>
using namespace std;

int dp[11];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    dp[1] = 0;
    dp[2] = 2;
    dp[3] = 6;
    dp[4] = 18;
    dp[5] = 54;
    dp[6] = 162;
    dp[7] = 486;
    dp[8] = 1458;
    dp[9] = 4374;

    cout << dp[n];
    return 0;

    return 0;
}