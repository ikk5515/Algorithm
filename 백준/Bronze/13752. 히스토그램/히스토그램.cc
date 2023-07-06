// BOJ_13752_히스토그램
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, a; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        for (int j = 0; j < a; j++) {
            cout << "=";
        }
        cout << '\n';
    }
    return 0;
}