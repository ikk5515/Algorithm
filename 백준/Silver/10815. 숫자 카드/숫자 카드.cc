// BOJ_10815_숫자 카드
#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n );
    int m = 0; cin >> m;
    int num = 0;
    for (int i = 0; i < m; i++) {
        cin >> num;
        if (binary_search(arr, arr+n, num)) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

    return 0;
}