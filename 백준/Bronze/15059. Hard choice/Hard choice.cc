// BOJ_15059_Hard choice
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int a[3] = { 0, }, b[3] = { 0, }, ans = 0;
    for (int i = 0; i < 3; i++) cin >> a[i];
    for (int i = 0; i < 3; i++) cin >> b[i];
    for (int i = 0; i < 3; i++) {
        if (a[i] < b[i]) ans += b[i] - a[i];
    }
    cout << ans << "\n";
    return 0;
}