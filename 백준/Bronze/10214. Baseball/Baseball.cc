// BOJ_10214_Baseball
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int Y = 0, K = 0;
        for (int i = 0; i < 9; i++) {
            int yonsei, korea; cin >> yonsei >> korea;
            Y += yonsei; K += korea;
        }
        if (Y > K) cout << "Yonsei\n";
        else if (Y < K) cout << "Korea\n";
        else cout << "Draw\n";
    }
    return 0;
}