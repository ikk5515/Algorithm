// BOJ_5032_탄산 음료
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int e, f, c; cin >> e >> f >> c;
    int sum = e + f;
    int cnt = 0;
    while (sum >= c) {
        cnt += sum / c;
        sum = (sum / c) + (sum % c);
    }
    cout << cnt;
    return 0;
}
