// BOJ_9093_단어 뒤집기
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    string str;
    cin >> T;
    cin.ignore();
    while(T--) {
        getline(cin, str);
        string tmp;
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == ' ') {
                reverse(tmp.begin(), tmp.end());
                cout << tmp << " ";
                tmp = "";
            } else {
                tmp += str[i];
            }
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp << "\n";
    }
    return 0;
}