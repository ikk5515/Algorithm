// BOJ_2858_기숙사 바닥
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int R, B, L, W;
    cin >> R >> B;
    for (int i = 1; i <= B; i++) {
        if (B % i == 0) {
            L = i;
            W = B / i;
            if (2 * L + 2 * W + 4 == R) {
                cout << W + 2 << " " << L + 2;
                break;
            }
        }
    }
    return 0;
}