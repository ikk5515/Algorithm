// BOJ_1731_추론
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int arr[50] = { 0, };
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = 0;
    if (arr[1] - arr[0] == arr[2] - arr[1]) {
        ans = arr[n - 1] + (arr[1] - arr[0]);
    }
    else {
        ans = arr[n - 1] * (arr[1] / arr[0]);
    }
    cout << ans << "\n";
    return 0;
}