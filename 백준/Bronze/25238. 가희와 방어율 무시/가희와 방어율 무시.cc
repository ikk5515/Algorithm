// BOJ_25238_가희와 방어율 무시
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b; cin >> a >> b;

    if (a * (100-b) / 100 >= 100) {
        cout << 0;
    } else {
        cout << 1;
    }
    return 0;
}