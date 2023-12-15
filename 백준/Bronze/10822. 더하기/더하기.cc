// BOJ_10822_더하기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int sum = 0;
    string tmp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') {
            sum += stoi(tmp);
            tmp = "";
        } else {
            tmp += s[i];
        }
    }
    sum += stoi(tmp);
    cout << sum;
    return 0;
}