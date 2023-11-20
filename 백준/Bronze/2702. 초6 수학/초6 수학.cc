// BOJ_2702_초6 수학
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        int gcd = 1;
        for (int i = 2; i <= min(a, b); i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }
        cout << a * b / gcd << " " << gcd << "\n";
    }
}