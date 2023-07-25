// BOJ_15873_공백 없는 A+B
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int a = n / 10;
    int b = n % 100;
    if (a > 10) {
        a /= 10;
    }
    if (b > 10) {
        b %= 10;
    }

    cout << a+b;
    return 0;
}