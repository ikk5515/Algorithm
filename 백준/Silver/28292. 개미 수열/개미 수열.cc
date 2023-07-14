#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;

    if (n >= 1 && n <= 2) {
        cout << 1;
    } else if (n >= 3 && n <= 5) {
        cout << 2;
    } else {
        cout << 3;
    }
    return 0;
}
