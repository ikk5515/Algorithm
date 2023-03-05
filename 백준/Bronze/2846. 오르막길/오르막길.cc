// BOJ_2846_오르막길
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;
    int tmp = 0;
    int lst = 0;
    for (int i = 0; i < n-1; i++) {
        if (arr[i] < arr[i+1]) {            // 오르막
            tmp++;
            ans = max(ans, arr[tmp] - arr[lst]);
        } else if (arr[i] >= arr[i+1]) {    // 내리막
            tmp = i+1;
            lst = i+1;
        }
    }
    cout << ans;
    return 0;
}