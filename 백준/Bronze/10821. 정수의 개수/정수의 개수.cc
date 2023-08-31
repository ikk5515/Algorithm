// BOJ_10821_정수의 개수
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string str; cin >> str;
    int cnt = 1;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}