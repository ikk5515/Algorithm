// BOJ_10156_과자
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int k, n, m; cin >> k >> n >> m;

    if (m >= k * n) {
        cout << 0;
    } else {
        cout << k * n - m;
    }
    return 0;
}