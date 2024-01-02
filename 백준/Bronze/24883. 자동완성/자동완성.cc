// BOJ_24883_자동완성
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    char ch; cin >> ch;
    if (ch == 'n' || ch == 'N') cout << "Naver D2";
    else cout << "Naver Whale";
    return 0;
}