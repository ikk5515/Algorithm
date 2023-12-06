// BOJ_16673_고려대학교에는 공식 와인이 있다
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int C, K, P;
    cin >> C >> K >> P;
    int ans = 0;
    for (int i = 1; i <= C; i++) {
        ans += K * i + P * i * i;
    }
    cout << ans;
    return 0;
}