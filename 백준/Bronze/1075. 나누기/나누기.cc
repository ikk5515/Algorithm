// BOJ_1075_나누기
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, f; cin >> n >> f;
    n = (n / 100) * 100;
    while (n % f != 0) {
        n++;
    }
    n %= 100;
    if (n < 10) {
        cout << 0;
    }
    cout << n;
    return 0;
}