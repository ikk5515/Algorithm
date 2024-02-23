// BOJ_27890_특별한 작은 분수
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int x, N; cin >> x >> N;
    while (N--) {
        if (x % 2 == 0) x /= 2;
        else x *= 2;
        x ^= 6;
    }
    cout << x;
    return 0;
}