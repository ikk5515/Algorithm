// BOJ_20428_Улучшение успеваемости
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long a, b, c; cin >> a >> b >> c;
    long long ans = (3*a+b-c+2)/3;
    cout << ans;
    return 0;
}
