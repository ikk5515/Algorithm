// BOJ_11652_카드
#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int tmp = 1;
    int next = 0;
    long long ans = 0;
    ans = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i+1]) {
            tmp++;
        } else {
            tmp = 1;
        }
        
        if (tmp > next) {
            next = tmp;
            ans = arr[i];
        }
    }
    cout << ans << "\n";
    return 0;
}
