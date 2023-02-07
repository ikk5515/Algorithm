// BOJ_26123_외계 침략자 윤이
#include <iostream>
#include <map>
using namespace std;

map<int, int> m;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int max_num = -1;
    int n, d; cin >> n >> d;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        m[i] = tmp;
        if (tmp > max_num) {
            max_num = tmp;
        }
    }

    long long cnt = 0;
    for (auto iter : m) {
        if (n == 1) {
            if (d >= max_num) {
                cout << max_num;
                return 0;
            } else {
                cout << d;
                return 0;
            }
        }
        if (max_num >= 1) {
            if (iter.second < d && max_num < d) {
                cnt += iter.second;
            } else if (iter.second > max_num - d) {
                cnt += d - (max_num - iter.second);
            }
        }
    }
    cout << cnt;
    return 0;
}