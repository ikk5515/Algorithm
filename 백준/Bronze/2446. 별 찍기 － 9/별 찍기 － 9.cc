// BOJ_2446_별찍기 - 9
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) { // 0 ~ n-1
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 2 * (n - i) - 1; j++) cout << "*";
        cout << "\n";
    }
    for (int i = 1; i < n; i++) { // 1 ~ n-1
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << "\n";
    }
    return 0;
}