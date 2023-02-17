// BOJ_9657_돌 게임 3 
#include <iostream>
using namespace std;

int dp[1001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;
    dp[6] = 1;

    for (int i = 7; i <= 1000; i++) {
        if (dp[i-1] + dp[i-3] + dp[i-4] == 3) {
            dp[i] = 0;
        } else {
            dp[i] = 1;
        }
    }
    if (dp[n] == 1) {
        cout << "SK";
    } else {
        cout << "CY";
    }
    return 0;
}