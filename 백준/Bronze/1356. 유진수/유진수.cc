// BOJ_1356_유진수
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    bool flag = false;
    string str; cin >> str;

    if (str.size() == 1) {
        cout << "NO";
        return 0;
    }
    long long cnt = 0;
    for (int i = 0; i < str.size()-1; i++) { 
        cnt++;
        long long l = 1, r = 1;
        for (int j = 0; j < cnt; j++) {
            l *= str[j] - '0';
        }
        for (int k = cnt; k  < str.size(); k++) {
            r *= str[k] - '0';
        }
        
        if (l == r) {
            flag = true;
            break;
        }
    }
    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}