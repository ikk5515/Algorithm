// BOJ_2863_이게 분수?
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b, c, d; cin >> a >> b >> c >> d;
    double arr[4] = { 0, };
    arr[0] = a / c + b / d;
    arr[1] = c / d + a / b;
    arr[2] = d / b + c / a;
    arr[3] = b / a + d / c;

    double max = arr[0];
    int idx = 0;
    for (int i = 1; i < 4; i++) {
        if (max < arr[i]) {
            max = arr[i];
            idx = i;
        }
    }
    cout << idx;
    return 0;
}