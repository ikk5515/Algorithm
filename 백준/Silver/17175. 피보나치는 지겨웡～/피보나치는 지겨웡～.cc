// BOJ_17175_피보나치는 지겨웡~
#include <iostream>
using namespace std;

long long dp[51];

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    for (int i = 4; i <= 50; i++) {
        dp[i] = (1 + dp[i-1]+ dp[i-2])%1000000007;
    }
    cout << dp[n];
    return 0;
}