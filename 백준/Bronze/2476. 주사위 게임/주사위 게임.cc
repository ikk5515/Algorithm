// BOJ_2476_주사위 게임
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, a, b, c, max_n = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if (a == b && b == c) {
            sum = 10000 + a * 1000;
        } else if (a == b || a == c) {
            sum = 1000 + a * 100;
        } else if (b == c) {
            sum = 1000 + b * 100;
        } else {
            if (a > b && a > c) {
                sum = a * 100;
            } else if (b > a && b > c) {
                sum = b * 100;
            } else {
                sum = c * 100;
            }
        }
        if (sum > max_n) {
            max_n = sum;
        }
    }
    cout << max_n;
    return 0;
}