// BOJ_7510_고급 수학
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T; cin >> T;
    for (int i = 1; i <= T; i++) {
        int arr[3] = { 0, };
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr + 3);
        cout << "Scenario #" << i << ":\n";
        if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) cout << "yes\n\n";
        else cout << "no\n\n";
    }
    return 0;
}