// BOJ_18406_럭키 스트레이트
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    int len = str.length();
    int sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < len / 2; i++) {
        sum1 += str[i] - '0';
    }
    for (int i = len / 2; i < len; i++) {
        sum2 += str[i] - '0';
    }

    if (sum1 == sum2) {
        cout << "LUCKY";
    } else {
        cout << "READY";
    }
    return 0;
}