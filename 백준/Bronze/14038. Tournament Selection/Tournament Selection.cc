// BOJ_14038_Tournament Selection
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int win = 0;
    char ch;
    for (int i = 0; i < 6; i++) {
        cin >> ch;
        if (ch == 'W') win++;
    }
    if (!win) cout << "-1";
    else if (win < 3) cout << "3";
    else if (win < 5) cout << "2";
    else cout << "1";
    return 0;
}