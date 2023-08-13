// BOJ_1284_집 주소
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while (true) {
        int ans = 1;
        string s; cin >> s;
        if (s == "0") {
            break;
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                ans += 3;
            } 
            else if (s[i] == '0') {
                ans += 5;
            }
            else {
                ans += 4;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}