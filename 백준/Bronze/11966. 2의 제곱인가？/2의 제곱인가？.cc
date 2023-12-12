// BOJ_11966_2의 제곱인가?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int cnt = 0;
    while (n > 1) {
        if (n % 2 == 1) {
            cnt++;
            break;
        }
        n /= 2;
    }
    if (cnt == 0) cout << 1;
    else cout << 0;
    return 0;
}