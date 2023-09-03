// BOJ_2455_지능형 기차
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b;
    int sum = 0, max_n = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a >> b;
        sum -= a;
        sum += b;
        if (sum > max_n) {
            max_n = sum;
        }
    }
    cout << max_n;
    return 0;
}