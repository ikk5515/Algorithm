// BOJ_1919_애너그램 만들기
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int cnt = 0;
    string str1, str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++) {
        for (int j = 0; j < str2.length(); j++) {
            if (str1[i] == str2[j]) {
                str1[i] = '0';
                str2[j] = '0';
            }
        }
    }

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != '0') {
            cnt++;
        }
    }

    for (int i = 0; i < str2.length(); i++) {
        if (str2[i] != '0') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}