// BOJ_10988_팰린드롬인지 확인하기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    bool flag = false;
    for (int i = 0; i < str.length()/2; i++) {
        if (str[i] == str[str.length()-i-1]) {
            continue;
        } else {
            flag = true;
        }
    }
    if (flag) {
        cout << 0;
    } else {
        cout << 1;
    }
    return 0;
}