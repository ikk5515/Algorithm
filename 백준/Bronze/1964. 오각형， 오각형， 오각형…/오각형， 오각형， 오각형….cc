// BOJ_1964_오각형, 오각형, 오각형…
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n; cin >> n;
    int cnt = 10;
    long long sum = 22;
    if (n == 1) {
        cout << 5;
        return 0;
    } else if (n == 2) {
        cout << 12;
        return 0;
    } else if (n == 3) {
        cout << 22;
        return 0;
    } else {
        for (int i = 4; i <= n; i++) {
            cnt += 3;
            sum += cnt;
        }
    }
    cout << sum % 45678;
    return 0;
}