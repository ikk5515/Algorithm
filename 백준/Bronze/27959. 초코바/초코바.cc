// BOJ_27959_초코바
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n, m; cin >> n >> m;

    if (100 * n >= m) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}