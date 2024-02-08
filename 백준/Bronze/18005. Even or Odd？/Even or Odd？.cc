// BOJ_18005_Even or Odd?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n % 2) cout << 0;
    else {
        if (n * (n + 1) / 2 % 2) cout << 1;
        else cout << 2;
    }
    return 0;
}