// BOJ_7891_Can you add this?
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b; cin >> a >> b;
        cout << a + b << "\n";
    }
    return 0;
}