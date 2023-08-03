// BOJ_11945_뜨거운 붕어빵
#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        for (int j = m - 1; j >= 0; j--) {
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}