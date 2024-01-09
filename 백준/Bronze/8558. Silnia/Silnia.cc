// BOJ_8558_Silnia
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int ans = 1;
    for (int i = 2; i <= n; i++) {
        ans *= i;
        ans %= 10;
    }
    cout << ans;
    return 0;
}