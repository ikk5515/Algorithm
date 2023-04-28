// BOJ_25372_성택이의 은밀한 비밀번호
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string str; cin >> str;
        if (str.size() >= 6 && str.size() <= 9) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    return 0;
}