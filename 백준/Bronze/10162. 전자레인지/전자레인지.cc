// BOJ_10162_전자레인지
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    int A = 0, B = 0, C = 0;

    cin >> T;
    if (T % 10 != 0) cout << -1;
    else {
        A = T / 300;
        T %= 300;
        B = T / 60;
        T %= 60;
        C = T / 10;
        cout << A << " " << B << " " << C;
    }
    return 0;
}