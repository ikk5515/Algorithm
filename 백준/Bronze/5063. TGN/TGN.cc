// BOJ_5063_TGN
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.tie(NULL);
    int n, r, e, c;
    cin >> n;
    while (n--) {
        cin >> r >> e >> c;
        if (r < e - c) {
            cout << "advertise\n";
        }
        else if (r == e - c) {
            cout << "does not matter\n";
        }
        else {
            cout << "do not advertise\n";
        }
    }
    return 0;
}