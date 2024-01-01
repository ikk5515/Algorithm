// BOJ_25377_빵
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,A,B; cin >> N;
    int ans = 1e9;
    while (N--) {
        cin >> A >> B;
        if (A <= B && B < ans) ans = B;
    }
    if (ans == 1e9) cout << -1;
    else cout << ans;
}