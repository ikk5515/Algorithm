// BOJ_26545_Mathematics
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    int res = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        res += a;
    }
    cout << res;
    return 0;
}