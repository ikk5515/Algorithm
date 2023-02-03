// BOJ_20977_JOI ソート (JOI Sort)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    string str; cin >> str;

    int j_cnt = 0, i_cnt = 0, o_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'J') {
            j_cnt++;
        } else if(str[i] == 'I') {
            i_cnt++;
        } else {
            o_cnt++;
        }
    }
    string ans = "";
    while(true) {
        if (j_cnt != 0) {
            ans += "J";
            j_cnt--;
        } else if (o_cnt != 0) {
            ans += "O";
            o_cnt--;
        } else {
            ans += "I";
            i_cnt--;
        }
        if (j_cnt == 0 && o_cnt == 0 && i_cnt == 0) {
            break;
        }
    }
    cout << ans;
    return 0;
}