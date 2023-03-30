// BOJ_1515_수 이어 쓰기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string base; cin >> base;
    int cnt = 0;

    for (int i = 1; i <= 30000; i++) {
        string tmp = to_string(i);
        for (int j = 0; j < tmp.length(); j++) {
            if (base[cnt] == tmp[j]) {
                cnt++;
            }
            if (cnt == base.length()) {
                cout << i;
                return 0;
            }
        }
    }
}