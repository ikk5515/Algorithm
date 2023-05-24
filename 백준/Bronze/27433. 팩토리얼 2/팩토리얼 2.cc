// BOJ_27433_팩토리얼 2
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    cout << res;
    return 0;
}