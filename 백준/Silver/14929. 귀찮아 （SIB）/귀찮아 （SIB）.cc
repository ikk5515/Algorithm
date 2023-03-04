// BOJ_14929_귀찮아 (SIB)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    vector<long long> v(n+1);
    vector<long long> v2(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        v2[i] = v2[i-1] + v[i];
    }
    long long ans = 0;

    // 구간합 구하기
    for (int i = 2; i <= n; i++) {
        ans += v[i] * v2[i-1];
    }
    cout << ans;
    return 0;
}