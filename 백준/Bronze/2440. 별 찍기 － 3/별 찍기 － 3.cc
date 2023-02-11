// BOJ_2440_별 찍기 - 3
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}