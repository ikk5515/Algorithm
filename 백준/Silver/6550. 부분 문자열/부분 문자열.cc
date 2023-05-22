// BOJ_6550_부분 문자열
#include <iostream>
#include <string>
using namespace std;

void func(string a, string b) {
    int cnt = 0;
    bool flag = false;
    for (int i = 0; i < b.size(); i++) {
        if(a[cnt] == b[i]) {
            cnt++;
        }
        if (cnt == a.size()) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "Yes" << "\n";
        return;
    } else {
        cout << "No" << "\n";
        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string s, t;
    while(cin >> s >> t) {
        func(s, t);
    }
}