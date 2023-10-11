// BOJ_2902_KMP는 왜 KMP일까?
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            cout << str[i];
        }
    }
    return 0;
}