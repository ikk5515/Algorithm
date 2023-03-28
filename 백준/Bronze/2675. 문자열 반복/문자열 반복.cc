// BOJ_2675_문자열 반복
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int cnt; string str;
        cin >> cnt >> str;
        for (int j = 0; j < str.size(); j++) {
            for (int k = 0; k < cnt; k++) {
                cout << str[j];
            }
        }
        cout << "\n";
    }
    return 0;
}