// BOJ_8710_Koszykarz
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int k, w, m; cin >> k >> w >> m;
    int cnt = 0;
    while (k < w) {
        k += m;
        cnt++;
    }
    cout << cnt;
    return 0;
}