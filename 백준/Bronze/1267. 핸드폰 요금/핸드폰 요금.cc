// BOJ_1267_핸드폰 요금
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int y = 0, m = 0;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        y += (tmp / 30 + 1) * 10;
        m += (tmp / 60 + 1) * 15;
    }
    if (y < m) {
        cout << "Y " << y;
    } else if (y > m) {
        cout << "M " << m;
    } else {
        cout << "Y M " << y;
    }
    return 0;
}