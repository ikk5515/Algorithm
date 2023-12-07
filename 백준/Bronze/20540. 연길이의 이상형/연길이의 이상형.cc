// BOJ_20540_연길이의 이상형
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string str; cin >> str;
    for (int i = 0; i < 4; i++) {
        if (str[i] == 'E') cout << 'I';
        else if (str[i] == 'I') cout << 'E';
        else if (str[i] == 'S') cout << 'N';
        else if (str[i] == 'N') cout << 'S';
        else if (str[i] == 'T') cout << 'F';
        else if (str[i] == 'F') cout << 'T';
        else if (str[i] == 'J') cout << 'P';
        else if (str[i] == 'P') cout << 'J';
    }
    return 0;
}