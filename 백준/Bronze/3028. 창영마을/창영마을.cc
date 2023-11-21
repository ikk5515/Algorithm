// BOJ_3028_창영마을
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string s; cin >> s;
    int cup[3] = { 1, 0, 0 };
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            swap(cup[0], cup[1]);
        }
        else if (s[i] == 'B') {
            swap(cup[1], cup[2]);
        }
        else {
            swap(cup[0], cup[2]);
        }
    }
    for (int i = 0; i < 3; i++) {
        if (cup[i] == 1) {
            cout << i + 1;
        }
    }   
    return 0;
}