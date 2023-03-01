// BOJ_25496_장신구 명장 임스
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int p, n; cin >> p >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (p < 200) {
            p += v[i];
            cnt++;
        } else {
            break;
        }
    }
    cout << cnt;
    return 0;
}