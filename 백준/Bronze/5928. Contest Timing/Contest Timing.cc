// BOJ_5928_Contest Timing
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int d, h, m; cin >> d >> h >> m;
    int p = 11 + 11 * 60 + 11 * 60 * 24;
    int ans = m + h * 60 + d * 60 * 24 - p;
    if (ans < 0 ) {
        cout << -1;
    }
    else {
        cout << ans;
    } 
    return 0;
}