// BOJ_5622_다이얼
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int ans = 0;
    string str; cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 65 || str[i] == 66 || str[i] == 67) {
            ans += 3;
        } else if (str[i] == 68 || str[i] == 69 || str[i] == 70) {
            ans += 4;
        } else if (str[i] == 71 || str[i] == 72 || str[i] == 73) {
            ans += 5;
        } else if (str[i] == 74 || str[i] == 75 || str[i] == 76) {
            ans += 6;
        } else if (str[i] == 77 || str[i] == 78 || str[i] == 79) {
            ans += 7;
        } else if (str[i] == 80 || str[i] == 81 || str[i] == 82 || str[i] == 83) {
            ans += 8;
        } else if (str[i] == 84 || str[i] == 85 || str[i] == 86) {
            ans += 9;
        } else if (str[i] == 87 || str[i] == 88 || str[i] == 89 || str[i] == 90) {
            ans += 10;
        } else {
            continue;
        }
    }
    cout << ans;
    
    return 0;
}