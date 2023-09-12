// BOJ_1371_가장 많은 글자
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int alpha[26] = {0,};
    string s;
    while (cin >> s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') alpha[s[i] - 'a']++;
        }
    }
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > max) max = alpha[i];
    }
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == max) cout << (char)(i + 'a');
    }
    return 0;
}