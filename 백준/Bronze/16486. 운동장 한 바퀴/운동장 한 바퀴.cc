// BOJ_16486_운동장 한 바퀴
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int d1, d2; cin >> d1 >> d2;

    cout << fixed;
    cout.precision(6);
    cout << 2 * d1 + 2 * 3.141592 * d2;
    return 0;
}
