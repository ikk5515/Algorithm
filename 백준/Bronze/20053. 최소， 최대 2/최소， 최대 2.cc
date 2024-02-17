// BOJ_20053_최소, 최대 2
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int N; cin >> N;
        int max_num = -2100000000, min_num = 2100000000;
        for (int i = 0; i < N; i++) {
            int num; cin >> num;
            max_num = max(max_num, num);
            min_num = min(min_num, num);
        }
        cout << min_num << " " << max_num << "\n";
    }
    return 0;
}