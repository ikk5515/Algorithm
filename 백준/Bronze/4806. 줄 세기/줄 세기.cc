// BOJ_4806_줄 세기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str;
    int cnt = 0;
    while (getline(cin, str)) {
        cnt++;
    }
    cout << cnt;
    return 0;
}