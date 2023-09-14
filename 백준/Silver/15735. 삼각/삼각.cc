// BOJ_15735_삼각
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    long long res = 0;
    if (n % 2 == 0) {
        // (n(n+2)(2n+1)) / 8 => (n)(n+1)(n+2) / 6 + n(n+2)(2n-1) / 24
        long double num1 = (n*(n+2)) / 4.0;
        long double num2 = (2*n+1) / 2.0;
        res = num1 * num2;
        cout << res;
    } else {
        // ((n+1)(2*n^2+3n+1)) / 8 => n(n+1)(n+2) / 6 + (n-1)(n+1)(2n+3) / 24
        res = ((n+1)*(2*pow(n,2)+3*n-1)) / 8;
        cout << res;
    }

    return 0;
}