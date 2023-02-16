// BOJ_19709_LunchBox
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<long long> v;
    int n, m; cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int num; cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());

    int cur = 0;
    long long ans = 0;
    while (true) {
        if (n < v[cur] || cur > m-1) {
            break;
        }
        if (n >= v[cur]) {
            n -= v[cur];
            cur++;
            ans++;
        }
    }    
    cout << ans;
    return 0;
}