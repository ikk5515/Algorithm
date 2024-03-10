// BOJ_10992_별 찍기 - 17
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << "*";
        for (int j = 0; j < 2 * i - 3; j++) {
            cout << " ";
        }
        if (i != 1) {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        cout << "*";
    }
    cout << "\n";
    return 0;
}