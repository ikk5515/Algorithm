// BOJ_2592_대표값
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    vector<int> v(10);
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    int cnt = 1, max = 1, max_num = v[0];
    for (int i = 1; i < 10; i++) {
        if (v[i] == v[i - 1]) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        if (cnt > max) {
            max = cnt;
            max_num = v[i];
        }
    }
    cout << sum / 10 << "\n" << max_num;
    return 0;
}