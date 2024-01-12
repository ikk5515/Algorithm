// BOJ_22015_金平糖 (Konpeito)
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a, b, c, max_num;
    cin >> a >> b >> c;
    max_num = max({a, b, c});
    cout << max_num - a + max_num - b + max_num - c;
    return 0;
}