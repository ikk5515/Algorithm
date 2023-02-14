// BOJ_6752_Time on task
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    vector<long long> v;
    int t, n; cin >> t >> n;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        v.push_back(num);
    }

    int cnt = 0;
    sort(v.begin(), v.end());
    int cur = 0;
    while (true) {
        if (t >= v[cur]) {
            t -= v[cur];
            cnt++;
            cur++;
        }else {
            break;
        }
    }
    cout << cnt;
    return 0;
}