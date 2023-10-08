// BOJ_1773_폭죽쇼
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, C; cin >> N >> C;
    vector<int> v(C+1);
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        for (int j = num; j <= C; j += num) {
            v[j] = 1;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= C; i++) {
        if (v[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}
