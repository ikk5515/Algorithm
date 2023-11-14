// BOJ_2495_연속구간
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        int cnt = 1, max = 1;
        for (int j = 1; j < s.size(); j++) {
            if (s[j] == s[j - 1]) {
                cnt++;
                if (max < cnt) max = cnt;
            }
            else cnt = 1;
        }
        cout << max << "\n";
    }
    return 0;
}