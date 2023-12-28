// BOJ_10179_쿠폰
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        double price; cin >> price;
        cout << fixed << setprecision(2) << "$" << price * 0.8 << "\n";
    }
    return 0;
}