// BOJ_1246_온라인 판매
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long arr[1001] = { 0, };
    int n, m; cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        cin >> arr[i];
    }
    sort(arr + 1, arr + 1 + m, greater<int>());
    int tmp = 0;
    for (int i = 1; i <= m ; i++) {
        if (i > n) {
            break;
        }
        if (arr[i] * i > arr[tmp] * tmp) {
            tmp = i;
        }
    }
    cout << arr[tmp] << " " << arr[tmp] * tmp;
    return 0;
}