// BOJ_5598_카이사르 암호
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] - 3 < 'A') cout << char(s[i] + 23);
        else cout << char(s[i] - 3);
    }
    return 0;
}