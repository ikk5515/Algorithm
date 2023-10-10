// BOJ_2711_오타맨 고창영
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int idx;
        string str;
        cin >> idx >> str;
        str.erase(idx - 1, 1);
        cout << str << '\n';
    }
    return 0;
}