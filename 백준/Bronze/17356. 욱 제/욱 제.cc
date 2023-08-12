// BOJ_17356_욱 제
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double a, b; cin >> a >> b;
    double m = (b - a) / 400;
    double ans = 1 / (1 + pow(10, m));
    cout << ans;
    return 0;
}