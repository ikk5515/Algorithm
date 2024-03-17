// BOJ_10419_지각
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    while (T--) {
        int d; cin >> d;
        int i = 0;
        while (i * (i + 1) <= d) {
            i++;
        }
        cout << i - 1 << "\n";
    }
    return 0;
}