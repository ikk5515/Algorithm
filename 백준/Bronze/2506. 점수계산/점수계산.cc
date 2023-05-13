// BOJ_2506_점수계산
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int arr[101] = { 0, };
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >>arr[i];
    }

    int res = arr[0];
    int cnt = 0;
    if (res == 0) {
        cnt = 0;
    } else {
        cnt = 1;
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] != 0) {
            if (arr[i-1] != 0) {
                cnt++;
                res += cnt;
            } else {
                res += 1;
                cnt = 1;
            }
        } else {
            cnt = 1;
        }
    }
    cout << res;
    return 0;
}