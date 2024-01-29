// BOJ_4458_첫 글자를 대문자로
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    string str;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, str);
        if (str[0] >= 'a' && str[0] <= 'z') {
            str[0] -= 32;
        }
        cout << str << "\n";
    }
    return 0;
}