// BOJ_27940_가지 산사태
#include <iostream>
using namespace std;

int arr[100001];
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long long n, m, k; cin >> n >> m >> k;

    int cnt = 0;
    bool b = false;
    for (int i = 0; i < m; i++) {
        int t, r; cin >> t >> r;
        cnt += r;
        if (cnt > k) {
            cout << i+1 << " " << 1; 
            return 0;
        }
    }
    if (!b) {
        cout << -1;
    }
    return 0;
}