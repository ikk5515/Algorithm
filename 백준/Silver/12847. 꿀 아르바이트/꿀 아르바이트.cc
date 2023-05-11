// BOJ_12847_꿀 아르바이트
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;

    long long v[1000001] = { 0, };

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    long long result = 0, tmp = 0;
    for (int i = 1; i <= m; i++) {
        tmp += v[i];
    }
    result = tmp;
    for (int i = m+1; i <= n; i++) {
        tmp = tmp + v[i] - v[i - m];
        result = max(tmp, result);
    }
    cout << result;
    return 0;
}