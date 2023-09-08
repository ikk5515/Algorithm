// BOJ_2445_별 찍기 - 8
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) cout << "*";
        for (int j = 2 * (n - i); j > 0; j--) cout << " ";
        for (int j = i; j > 0; j--) cout << "*";
        cout << "\n";
    }
    for (int i = n - 1; i > 0; i--) {
        for (int j = i; j > 0; j--) cout << "*";
        for (int j = 2 * (n - i); j > 0; j--) cout << " ";
        for (int j = i; j > 0; j--) cout << "*";
        cout << "\n";
    }
    return 0;
}