// BOJ_28074_모비스
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string ch = "MOBIS";
    string str; cin >> str;

    int cnt = 0;
    for (int i = 0; i < ch.length(); i++) {
        for (int j = 0; j < str.length(); j++) {
            if (ch[i] == str[j]) {
                cnt++;
                break;
            }
        }
    }
    if (cnt == ch.length()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}