// BOJ_1459_걷기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long x, y, w, s; cin >> x >> y >> w >> s;

    // 일자거리
    long long a = (x + y) * w;
    // 대각선 거리 + abs(x-y)
    long long b = min(x, y) * s;

    if (abs(x-y) % 2 == 1) {
        b += min(abs(x-y) * w, (abs(x-y)-1) * s + w);
    } else {
        b += min(abs(x-y) * w, abs(x-y) * s);
    }
    cout << min(a,b);
    return 0;
}