// BOJ_2204_도비의난독증테스트
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while (true) {
        int N; cin >> N;
        if (N == 0) break;
        vector<pair<string, string>> v(N);
        for (int i = 0; i < N; i++) {
            string s; cin >> s;
            string t = s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            v[i] = { s, t };
        }
        sort(v.begin(), v.end());
        cout << v[0].second << "\n";
    }
    return 0;
}