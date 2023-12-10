// BOJ_17009_Winning Score
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;

    int x, y;
    x = a * 3 + b * 2 + c;
    y = d * 3 + e * 2 + f;
    if (x > y) cout << "A";
    else if (x < y) cout << "B";
    else cout << "T";
    return 0;
}