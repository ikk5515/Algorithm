// BOJ_30501_관공... 어찌하여 목만 오셨소...
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    string ans;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        for (int j = 0; j < s.size(); j++) {
            if(s[j] == 'S') {
                ans = s;
            }
        }
    }
    cout << ans;
    return 0;
}