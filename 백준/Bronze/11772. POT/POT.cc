// BOJ_11772_POT
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int p; cin >> p;
        int b = p / 10;
        int x = p % 10;
        sum += pow(b, x);
    }
    cout << sum;
    return 0;
}