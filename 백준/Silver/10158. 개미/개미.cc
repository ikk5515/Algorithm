// BOJ_10158_개미
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int w, h; cin >> w >> h;
    int p, q; cin >> p >> q;
    int t; cin >> t;

    p = (t + p) % (2 * w);
    q = (t + q) % (2 * h);

    if (p > w) {
        p = 2 * w - p;
    }
    if (q > h) {
        q = 2 * h - q;
    }

    cout << p << " " << q << "\n";
    
    return 0;
}