#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int arr[4] = { 0, };
    int p; cin >> p;

    for (int i = 0; i < p; i++) {
        int g, c, n; cin >> g >> c >> n;
        if (g == 1) {
            arr[3]++;
            continue;
        } else {
            if (c == 1 || c == 2) {
                arr[0]++;
            } else if (c == 3) {
                arr[1]++;
            } else {
                arr[2]++;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}