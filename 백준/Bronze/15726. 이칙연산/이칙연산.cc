// BOJ_15726_이칙연산
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double a, b, c; cin >> a >> b >> c;
    double max1 = a * b / c;
    double max2 = a / b * c;
    cout << (int)max(max1, max2);
    return 0;
}