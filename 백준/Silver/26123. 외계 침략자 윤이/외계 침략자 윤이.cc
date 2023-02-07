// BOJ_26123_외계 침략자 윤이
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int max_num = -1;
    int n, d; cin >> n >> d;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
        if (tmp > max_num) {
            max_num = tmp;
        }
    }

    long long cnt = 0;
    for (auto iter : v) {
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
            if (iter < d && max_num < d) {
                cnt += iter;
            } else if (iter > max_num - d) {
                cnt += d - (max_num - iter);
            }
        }
    }
    cout << cnt;
    return 0;
}