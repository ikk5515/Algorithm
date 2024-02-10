// BOJ_22938_백발백준하는 명사수
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long long d = pow((x1 - x2),2) + pow((y1 - y2),2);
    if (pow(r1 + r2, 2) > d) cout << "YES";
    else cout << "NO";
    return 0;
}