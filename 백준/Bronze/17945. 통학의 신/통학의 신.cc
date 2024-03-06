// BOJ_17945_통학의 신
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int A, B; cin >> A >> B;
    int x1 = -A + sqrt(A * A - B);
    int x2 = -A - sqrt(A * A - B);
    if (x1 == x2) {
        cout << x1;
    } else {
        cout << x2 << ' ' << x1;
    }
    return 0;
}