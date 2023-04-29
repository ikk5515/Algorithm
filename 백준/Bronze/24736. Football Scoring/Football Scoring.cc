// BOJ_24736_Football Scoring
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    for (int i = 0; i < 2; i++) {
        int t, f, s, p, c; cin >> t >> f >> s >> p >> c;
        cout << 6*t+3*f+2*s+1*p+2*c << "\n";
    }
    return 0;
}