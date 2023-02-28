// BOJ_1788_피보나치 수의 확장
#include <iostream>
#include <cmath>
using namespace std;

int dp[1000001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    int a = abs(n);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= a; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2])%1000000000;
    }
    if (n > 0) {
        cout << 1 << "\n";
    } else if (n < 0) {
        if (n%2 == 0) {
            cout << -1 << "\n";
        } else {
            cout << 1 << "\n";
        }
    } else {
        cout << 0 << "\n";
    }
    cout << dp[a];
    return 0;
}
/*
n이 음수일 때 짝수인 경우 음수가 됨
f(-5) = 5
f(-4) = -3
f(-3) = 2
f(-2) = -1
f(-1) = 1
f(0) = 0
f(1) = 1
f(2) = 1
f(3) = 2
f(4) = 3
f(5) = 5
*/
