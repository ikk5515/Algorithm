// BOJ_25644_최대 상승
#include <iostream>
#include <vector>
using  namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N; cin >> N;
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    int max_num = 0;
    int ans = 0;
    for (int i = v.size()-1; i >= 0; i--) {
        if (v[i] > max_num) {
            max_num = v[i];
        }
        ans = max(ans, max_num-v[i]);
    }
    cout << ans;
    return 0;
}