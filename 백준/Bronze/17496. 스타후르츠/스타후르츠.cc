// BOJ_17496_스타후르츠
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N, T, C, P; cin >> N >> T >> C >> P;
    int ans = (N-1)/T * C * P;
    cout << ans;
    return 0;
}