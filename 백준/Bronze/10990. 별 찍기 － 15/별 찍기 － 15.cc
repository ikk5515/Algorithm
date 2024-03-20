// BOJ_10990_별 찍기 - 15
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j > 0; j--) {
            cout << " ";
        }
        cout << "*";
        if (i == 0) {
            cout << "\n";
            continue;
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
    return 0;
}