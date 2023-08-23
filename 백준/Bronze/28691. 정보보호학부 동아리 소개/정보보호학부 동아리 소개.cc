// BOJ_28691_정보보호학부 동아리 소개
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    char ch; cin >> ch;
    if (ch == 'M') cout << "MatKor";
    else if (ch == 'W') cout << "WiCys";
    else if (ch == 'C') cout << "CyKor";
    else if (ch == 'A') cout << "AlKor";
    else cout << "$clear";

    return 0;
}