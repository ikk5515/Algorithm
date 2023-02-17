// BOJ_14606_피자 (Small)
#include <iostream>
using namespace std;

int dp[11];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 3;
    dp[4] = 6;
    dp[5] = 10;
    
    for (int i  = 6; i <= 10; i++) {
        dp[i] = dp[i-1] + (i-1);
    }
    cout << dp[n];
    return 0;
}
