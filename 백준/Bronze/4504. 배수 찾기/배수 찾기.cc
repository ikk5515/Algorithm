// BOJ_4504_배수 찾기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n;
    while (true) {
        cin >> m;
        if (m == 0) break;
        if (m % n == 0) cout << m << " is a multiple of " << n << ".\n";
        else cout << m << " is NOT a multiple of " << n << ".\n";
    }
    return 0;
}