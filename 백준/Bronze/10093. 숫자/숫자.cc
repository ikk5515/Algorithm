// BOJ_10093_숫자
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long a, b; cin >> a >> b;
    if (a == b) {
        cout << 0;
        return 0;
    } else if (a > b) {
        long long tmp = a;
        a = b;
        b = tmp;
    }
    cout << b - a - 1 << "\n";
    for (long long i = a + 1; i < b; i++) {
        cout << i << " ";
    }
    return 0;
}