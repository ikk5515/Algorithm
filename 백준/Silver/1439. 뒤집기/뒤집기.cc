// BOJ_1439_뒤집기
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int zero = 0, one = 0;
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != s[i+1]) {
            if (s[i] == '0') {
                zero++;
            } else {
                one++;
            }
        }
    }
    cout << min(zero, one);
    return 0;
}