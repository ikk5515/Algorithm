// BOJ_1547_공
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int m; cin >> m;
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < m; i++) {
        int x, y; cin >> x >> y;
        int temp = arr[x - 1];
        arr[x - 1] = arr[y - 1];
        arr[y - 1] = temp;
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 1) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}