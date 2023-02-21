// BOJ_5596_시험 점수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;
    int e, f, g, h; cin >> e >> f >> g >> h;
    int sum_a = a + b + c + d;
    int sum_b = e + f + g + h;
    if (sum_a > sum_b) {
        cout << sum_a;
    } else if (sum_b > sum_a) {
        cout << sum_b;
    } else {
        cout << sum_a;
    }
    return 0;
}