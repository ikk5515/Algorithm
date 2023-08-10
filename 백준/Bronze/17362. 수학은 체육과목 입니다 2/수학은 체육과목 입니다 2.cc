// BOJ_17362_수학은 체육과목 입니다 2
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;

    int ans = n % 8;
    if (ans == 0) {
        ans = 2;
    }
    else if (ans == 7) {
        ans = 3;
    }
    else if (ans == 6) {
        ans = 4;
    }
    cout << ans;
    return 0;
}